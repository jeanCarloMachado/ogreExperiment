#include "System/Db/Database.h"

   
  System::Database::Database()
  {
  }
   
  System::Database::~Database()
  {
        close();
  }
   
  bool System::Database::open(const char* filename)
  {
    sqlite3 *database = NULL;

      if(!sqlite3_open(filename, &database) == SQLITE_OK)
          throw "Não conseguiu abrir o arquivo";
           
      return 1;
  }
   

   /**
    * using EXAMPLE
    *
    * 
  TableAbstract *ta = new TableAbstract();
  vector<vector<string> > result = ta->run("SELECT * from problem");;
  
  for(vector<vector<string> >::iterator it = result.begin(); it < result.end(); ++it)
  {
    vector<string> row = *it;
    std::cout << "Values: (A=" << row.at(0) << ", B=" << row.at(1) << ")" << std::endl;
  }
    */
  vector<vector<string> > System::Database::query(const char* query)
  {
      sqlite3 *database = NULL;

      if(!sqlite3_open("database.db", &database) == SQLITE_OK)
          throw "Não conseguiu abrir o arquivo";
           

      sqlite3_stmt *statement;
      vector<vector<string> > results;
   
      if(sqlite3_prepare_v2(database, query, -1, &statement, 0) == SQLITE_OK)
      {
          int cols = sqlite3_column_count(statement);
          int result = 0;
          while(true)
          {
              result = sqlite3_step(statement);
               
              if(result == SQLITE_ROW)
              {
                  vector<string> values;
                  for(int col = 0; col < cols; col++)
                  {
                      if((char*)sqlite3_column_text(statement, col) != NULL)
                        values.push_back((char*)sqlite3_column_text(statement, col));
                  }
                  results.push_back(values);
              }
              else
              {
                  break;  
              }
          }
          sqlite3_finalize(statement);
      }
       
      string error = sqlite3_errmsg(database);
      if(error != "not an error") cout << query << " " << error << endl;
      
      return results; 
  }
   
  void System::Database::close()
  {
      sqlite3_close(database);  
  }
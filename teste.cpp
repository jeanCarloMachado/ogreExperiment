#include <sqlite3.h>
#include <cstdio>


// This is the callback function to display the select data in the table
static int callback(void *NotUsed, int argc, char **argv, char **azColName)
{
  int i;
  for(i=0; i<argc; i++)
  {
    printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
  }
  printf("\n");
  return 0;
}


int main()
{	
	sqlite3 *db;


	 if(!sqlite3_open("database.db", &db) == SQLITE_OK)
          	throw "Não conseguiu abrir o arquivo";

	  const char *pSQL[6];
	   char *zErrMsg;

	  // // Create a new myTable in database
	  // pSQL[0] = "create table myTable (FirstName varchar(30), LastName varchar(30), Age smallint)";

	  // // Insert first data item into myTable
	  // pSQL[1] = "insert into myTable (FirstName, LastName, Age) values ('Woody', 'Alan', 45)";
	 
	  // // Insert second data item into myTable
	  // pSQL[2] = "insert into myTable (FirstName, LastName, Age) values ('Micheal', 'Bay', 38)";

	  // Select all data in myTable
	  pSQL[0] = "select * from problem";
	 
	  // // Remove all data in myTable
	  // pSQL[4] = "delete from myTable";

	  // // Drop the table from database
	  // pSQL[5] = "drop table myTable";

	  // execute all the sql statements
	  // for(int i = 0; i < 6; i++)
	  // {
	  int rc;
	    rc = sqlite3_exec(db, pSQL[0], callback, 0, &zErrMsg);
	    if( rc!=SQLITE_OK ){
	      fprintf(stderr, "SQL error: %s\n", zErrMsg);
	      sqlite3_free(zErrMsg);
	    }
	  // }
}
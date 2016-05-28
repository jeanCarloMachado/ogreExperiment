#include "System/Db/TableAbstract.h"

System::Database* System::TableAbstract::_db = 0;

/**
 * USING EXAMPLE
 * Database *db;
 * db = new Database("Database.sqlite");
 * db->query("CREATE TABLE a (a INTEGER, b INTEGER);");
 * db->query("INSERT INTO a VALUES(1, 2);");
 * db->query("INSERT INTO a VALUES(5, 4);");
 * vector<vector<string> > result = db->query("SELECT a, b FROM a;");
 * for(vector<vector<string> >::iterator it = result.begin(); it < result.end(); ++it)
 * {
 *     vector<string> row = *it;
 *     cout << "Values: (A=" << row.at(0) << ", B=" << row.at(1) << ")" << endl;
 * }
 */



vector<vector<string> > System::TableAbstract::run(const char* query)
{
	System::Database* db  =  System::TableAbstract::getAdapter();

	return	db->query(query);
}




vector<vector<string> >System::TableAbstract::get(vector<string> where)
{	
	vector<vector<string> > result;

	const char* tableName =  getTableName() ;

	char query[MAX_QUERY_LENGHT]= "SELECT * FROM ";
	strcat(query,tableName);

	/**
	 * executa a query
	 */
	result = run(query);

	return result;
}

vector<vector<string> > System::TableAbstract::getSchema()
{
	vector<vector<string> > result;

	const char* tableName =  getTableName() ;

	char query[MAX_QUERY_LENGHT];
	sprintf(query,"PRAGMA table_info('%s') ",tableName);

	/**
	 * executa a query
	 */
	result = run(query);


	return result;
}

vector<vector<string> > System::TableAbstract::remove(vector<string> where)
{	
	vector<vector<string> > result;

	return result;
}
vector<vector<string> > System::TableAbstract::create(vector<string> set)
{	
	vector<vector<string> > result;

	const char* tableName =  getTableName() ;

	char query[MAX_QUERY_LENGHT]= "INSERT INTO ";
	strcat(query,tableName);


	// vector<vector<string> > schema = this->getSchema();

	//  for(vector<vector<string> >::iterator it = schema.begin(); it < schema.end(); ++it)
	//   {
	//       vector<string> row = *it;
	//       cout << "parametros: (A=" << row.at(1) << endl;
	//   }
	
	  

	/**
	 * executa a query
	 */
	result = run(query);

	std::cout << query << std::endl;

	return result;
}

vector<vector<string> > System::TableAbstract::update(vector<string> set, vector<string> where)
{	
	vector<vector<string> > result;

	return result;
}
vector<vector<string> > System::TableAbstract::updateOrCreate(vector<string> set, vector<string> where)
{	
	vector<vector<string> > result;

	return result;
}

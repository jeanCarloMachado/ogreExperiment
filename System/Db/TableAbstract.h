#ifndef __SYSTableAbstract__
#define __SYSTableAbstract__

#include <string>
#include <vector>
#include <sqlite3.h>
#include <cstring>
#include <cstdio>

#include "System/Db/Database.h"
#include "System/Language.h"

#define MAX_QUERY_LENGHT 100


using namespace std;

namespace System 
{
	/**
	 * controlador de mensagens do sistema
	 */
	class TableAbstract 
	{	
	private:
		static System::Database* _db;

	public:
		static void setAdapter(System::Database *db)
		{
			_db = db;
		}

		static System::Database* getAdapter()
		{
			return _db;
		}		
		
		vector<vector<string> > run(const char* query);
	
		vector<vector<string> > get(vector<string> where);
		vector<vector<string> > getSchema();
		vector<vector<string> > remove(vector<string> where);
		vector<vector<string> > create(vector<string> set);

		vector<vector<string> > update(vector<string> set, vector<string> where);
		vector<vector<string> > updateOrCreate(vector<string> set, vector<string> where);

		/**
		 * retorna o próximo id do banco de daddos
		 * @return [description]
		 */
		//int getNextId();

		virtual const char* getTableName() =0;

		enum column{};

	protected:
		const char* name = NULL;

	};
}
#endif
	


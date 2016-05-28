#ifndef __MODELSolutions__
#define __MODELSolutions__

#include "System/Db/TableAbstract.h"
#define MAX_QUERY_LENGHT 100

class ModelSolutions : public System::TableAbstract
{
public:	
	enum column 
	 {
	 	title,
	 	id,
	 	os,
	 	compiler,
	 	compiler_version,
	 	id_error_type,
	 	description,
	 	system_error,
	 	system_file,
	 	totalColumns
	 };

	int manual_create(const char* title,const char* os,const char* compiler,const char* compilerVersion, int id_error_type, const char* description, int system_erro, const char* system_file);
	int manual_delete(int id);

	const char* getTableName()
	{
		return name;
	}
	//vector<vector<string> > manual_remove(const int id);
	//vector<vector<string> > manual_update(vector<string> set, vector<string> where);


protected:
	const char* name = "problem";
};
	
#endif
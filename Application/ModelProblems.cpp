#include "Application/ModelProblems.h"


using namespace System;
//int manual_create(const char* title,const char* os,const char* compiler,const char* compilerVersion, int id_error_type, const char* description, int system_erro, const char* system_file);
int ModelProblems::manual_create(const char* title,const char* os,const char* compiler,const char* compilerVersion, int id_error_type, const char* description, int system_erro, const char* system_file)
{	
	const char* tableName =  getTableName() ;

	char query[500];
	//sprintf(query,"INSERT INTO activities(name,description,minutes) VALUES('%s','%s',0);",tmp,description);
	sprintf(query, "INSERT INTO  %s (title,os,compiler,compiler_version,id_error_type,description,system_error,system_file) VALUES('%s','%s','%s','%s',%i,'%s',%i,'%s') ",tableName,title, os,compiler,compilerVersion,id_error_type,description,system_erro,system_file);
	
	run(query);
	return 1;
}

int ModelProblems::manual_delete(int id)
{
	const char* tableName =  getTableName() ;

	char query[500];
	//sprintf(query,"INSERT INTO activities(name,description,minutes) VALUES('%s','%s',0);",tmp,description);
	sprintf(query, "DELETE FROM %s WHERE id=%i ",tableName,id);
		
	run(query);
	return 1;
}
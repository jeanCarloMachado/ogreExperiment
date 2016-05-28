#include "Application/ControllerSolution.h"

using namespace System;

int ControllerSolution::insert(std::string params)
{	
	/** variables declaration */
	std::string title;
	std::string os;
	std::string compiler;
	std::string compilerVersion;
	std::string description;
	int system_error;
	int id_error_type = 1;
	std::string system_file = "";


	std::cout << System::Language::translate("Type a name to the error")<< std::endl;
	std::cin >> title;
	std::cout << System::Language::translate("Type your OS name")<< std::endl;
	std::cin >> os;
	std::cout << System::Language::translate("Type your compiler name")<< std::endl;
	std::cin >> compiler;
	std::cout << System::Language::translate("Type your compiler version")<< std::endl;
	std::cin >> compilerVersion;
	// std::cout << System::Language::translate("Select an error type - blabla[1]")<< std::endl;
	// std::cin >> id_error_type;
	std::cout << System::Language::translate("Put the output text or some description")<< std::endl;
	std::cin >> description;
	std::cout << System::Language::translate("Is it a library problem?  yes [1], no [0]")<< std::endl;
	std::cin >> system_error;

	if(system_error) {
		std::cout << System::Language::translate("Type the file name:")<< std::endl;
		std::cin >> system_file;
	}

	ModelProblems* mp = new ModelProblems;
	mp->manual_create(title.c_str(),
				os.c_str(),
				compiler.c_str(),
				compilerVersion.c_str(),
				id_error_type,
				description.c_str(),
				system_error,
				system_file.c_str()
				);
	
	 std::cout << "Error inserted sucessfully! " << std::endl;	
	return 1;
}

int ControllerSolution::listAll(std::string params) 
{
	ModelProblems mp;
	
	vector<string>  where;

	vector<vector<string> > result = mp.get(where);
	/**
	 * title,
 	id,
 	os,
 	compiler,
 	compiler_version,
 	id_error_type,
 	description,
 	system_error,
 	system_file,
 	totalColumns
	 */
	std::cout << "id|title|os|compiler|compiler version|error type|vendor error|vendor file" << std::endl;
	for(vector<vector<string> >::iterator it = result.begin(); it < result.end(); ++it)
	{
	  vector<string> row = *it;
	  std::cout << row.at(ModelProblems::id) << "|" << row.at(ModelProblems::title) << "|" 
	  << row.at(ModelProblems::os) << "|" << row.at(ModelProblems::compiler) << "|" 
	  << row.at(ModelProblems::compiler_version) << "|" << row.at(ModelProblems::id_error_type) << "|" 
	  << row.at(ModelProblems::description) << "|" << row.at(ModelProblems::description) << "|" 
	  << row.at(ModelProblems::system_error) << "|" << row.at(ModelProblems::system_file)   << std::endl;
	}
	return 1;
}

int ControllerSolution::listSchema(std::string params)
{
	ModelProblems mp;
	
	vector<vector<string> > result = mp.getSchema();
	  for(vector<vector<string> >::iterator it = result.begin(); it < result.end(); ++it)
	  {
	      vector<string> row = *it;
	      cout << "Values: (A=" << row.at(1) << endl;
	  }
	return 1;
}


int ControllerSolution::remove(std::string params)
{
	int id;
	std::cout << System::Language::translate("Type the error Id")<< std::endl;
	std::cin >> id;

	ModelProblems* mp = new ModelProblems;
	mp->manual_delete(id);
	
	 std::cout << "Error delete sucessfully! " << std::endl;	
	return 1;
}


int ControllerSolution::search(std::string params)
{
	std::cout << "Searching..." << std::endl;

	
}
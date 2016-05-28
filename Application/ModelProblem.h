#ifndef __MODELPROBLEM__
#define __MODELPROBLEM__

#include <string>

#include "System/Db/TableRowAbstract.h"

using namespace System;

class ModelProblem : public System::TableRowAbstract
{
private:
	std::string id;
	std::string title;
	std::string os;
	std::string compiler;
	std::string compilerVersion;
	std::string description;
	std::string vendorFile;

public:
	ModelProblem* setId(std::string _id)
	{
		id = _id;
		return this;
	}	

	std::string getId()
	{
		return id;
	}

	ModelProblem* setTitle(std::string _title)
	{
		title = _title;
		return this;
	}

	std::string getTitle()
	{
		return title;
	}

	ModelProblem* setOS(std::string _os)
	{
		os = _os;
		return this;
	}

	std::string getOS()
	{
		return os;
	}

	ModelProblem* setCompiler(std::string _compiler)
	{
		compiler = _compiler;
		return this;
	}

	std::string getCompiler()
	{
		return compiler;
	}

	ModelProblem* setCompilerVersion(std::string _compilerVersion)
	{
		compilerVersion = _compilerVersion;
		return this;
	}

	std::string getCompilerVersion()
	{
		return compilerVersion;
	}
	
	ModelProblem* setDescription(std::string _description)
	{
		description = _description;
		return this;
	}

	std::string getDescription()
	{
		return description;
	}
	
	ModelProblem* setVendorFile(std::string _vendorFile)
	{
		vendorFile = _vendorFile;
		return this;
	}

	std::string getVendorFile()
	{
		return vendorFile;
	}


};
	
#endif
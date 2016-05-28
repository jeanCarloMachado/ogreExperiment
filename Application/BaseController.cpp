#ifndef __BaseController__
#define __BaseController__

#include <iostream>
#include <stdlib.h>
#include "System/ControllerAbstract.cpp"

class BaseController : public System::ControllerAbstract
{	
public:
	virtual int index(std::string str)
	{ 
		std::cout << System::Language::translate("command not found") << std::endl;
		return 0;
	}

	virtual int quit(std::string str)
	{
		std::cout << System::Language::translate("command not exists in this contex") << std::endl;
		return 0;
	}


	virtual int insert(std::string str)
	{
		std::cout << System::Language::translate("command not exists in this contex") << std::endl;
		return 0;
	}

	virtual int remove(std::string str)
	{
		std::cout << System::Language::translate("command not exists in this contex") << std::endl;
		return 0;
	}

	virtual int update(std::string str)
	{
		std::cout << System::Language::translate("command not exists in this contex") << std::endl;
		return 0;
	}
	virtual int read(std::string)
	{
		std::cout << System::Language::translate("command not exists in this contex") << std::endl;
		return 0;
	}
	
	virtual int welcome(std::string)
	{
		std::cout << System::Language::translate("command not exists in this contex") << std::endl;
		return 0;
	}
	
	virtual int clear(std::string)
	{
		std::cout << System::Language::translate("command not exists in this contex") << std::endl;
		return 0;
	}

	virtual int help(std::string)
	{
		std::cout << System::Language::translate("command not exists in this contex") << std::endl;
		return 0;
	}
	
	virtual int listAll(std::string)
	{
		std::cout << System::Language::translate("command not exists in this contex") << std::endl;
		return 0;
	}

	virtual int listSchema(std::string)
	{
		std::cout << System::Language::translate("command not exists in this context") << std::endl;
		return 0;
	}	

	virtual int search(std::string)
	{
		std::cout << System::Language::translate("command not exists in this context") << std::endl;
		return 0;
	}

};
#endif
#ifndef __DefaultController__
#define __DefaultController__

#include <iostream>
#include <stdlib.h>
#ifdef __cplusplus__
	#include <cstdlib>
#else
	#include <stdlib.h>
#endif

#include "Application/BaseController.cpp"

class DefaultController : public BaseController
{	
public:
	int quit(std::string params)
	{
		std::cout << System::Language::translate("bye!")<< std::endl;
		exit(1);
	}


	int clear(std::string params)
	{
		system("clear");
	}

	int help(std::string params)
	{
		std::cout << System::Language::translate("the base sintax consists in: <action> <context> [params] \n Example: insert error verbose")<< std::endl;
	}
};
#endif
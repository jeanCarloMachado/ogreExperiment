#ifndef __MessageController__
#define __MessageController__

#include <iostream>
#include <stdlib.h>
#include "Application/BaseController.cpp"

/**
 * controlador de mensagens do sistema
 */
class MessageController : public BaseController
{	
public:
	int welcome(std::string params)
	{
		std::cout << System::Language::translate("Welcome to OGRE RPC, use: <help> if you dont know what are you doing.")<< std::endl;
	}

};
#endif
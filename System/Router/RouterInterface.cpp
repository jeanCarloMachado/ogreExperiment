#ifndef __SYSROUTER__
#define __SYSROUTER__

#include <string>
#include <iostream>
#include "System/Language.cpp"
#include "System/ControllerAbstract.cpp"

using namespace std;

namespace System
{
/**
 * ROUTER == (FrontController)
 * (utilizado em CMD APPLICATIONS ) não sei se
 * para OGRE também
 */
 	class RouterInterface
 	{	
 	public:
 		virtual int route(std::string input)  = 0;
 	};

 }
 #endif
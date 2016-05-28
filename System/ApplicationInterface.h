#ifndef __SYSAPPLICATIONINTERFACE__
#define __SYSAPPLICATIONINTERFACE__

#include <iostream>

#include "Application/Bootstrap.h"
#include "System/Language.h"

namespace System
{

/**
 * APPLICATION
 */
 	class ApplicationInterface
 	{
 	public:
 		virtual  int init()  = 0;
		virtual  int run() =0;
		virtual int setParams(char*** params) = 0;
		virtual void bootstrap() 
		{
			/**
			 * executa o bootstrap default
			 */
			Bootstrap bootstrap;
			bootstrap.bootstrap();
		}

	protected:
		char** params;
 	};
 }
 #endif
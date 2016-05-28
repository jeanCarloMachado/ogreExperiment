#ifndef __SYSCMDApplication__
#define __SYSCMDApplication__

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

#include "System/Language.h"
#include "System/Router/CMDRouterMgr.cpp"
#include "System/ApplicationInterface.h"

namespace System
{
	class CMDApplication : public System::ApplicationInterface
	{

	public:
		int init() 
		{
			return 1;
		}

		int run(void)
		{
			routerMgr.listen();

			return 1;
		}

		int setParams(char ***params) 
		{
			this->params = &**params;
		}

	protected:
		CMDRouterMgr routerMgr;
	};
}

#endif
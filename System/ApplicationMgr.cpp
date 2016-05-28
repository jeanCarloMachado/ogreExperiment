#ifndef __SYSAPPLICATIONMGR__
#define __SYSAPPLICATIONMGR__

#include <iostream>
#include <string>

#include "System/Language.h"
#include "System/CMDApplication.cpp"
#include "System/ApplicationInterface.h"

namespace System
{
	class ApplicationMgr
	{
	public:
		enum AppType {
			CMD,
			OGRE
		};

		static ApplicationInterface* Factory(AppType type) 
 		{
 			System::CMDApplication *obj;

 			switch(type)
 			{
 				case CMD:
					obj = new CMDApplication();
					break;

				default:
					std::string exception  = System::Language::translate("não foi possível encontrar esse tipo");
					throw exception;
 			}
			obj->init();
 			return obj;
 		}
		
	private:
		ApplicationMgr(){}
	};
}

#endif

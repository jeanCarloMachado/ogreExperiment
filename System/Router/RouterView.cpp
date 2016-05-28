#ifndef __SYSRouterView__
#define __SYSRouterView__

#include <string>
#include <iostream>

#include "System/Language.h"
#include "System/Object/String.cpp"
#include "System/Object/Util.h"

#define VIEW_PARAM_POSITION 0

namespace System
{	
	class RouterView
	{
	public:
		template<class T>
		int route(std::string input,T *pController)
		{
			vector<string> resultParams = System::String::toVector(input);	
			if(resultParams.size()  == 0) {
				return pController->index(input);	
			}

			if(! resultParams[VIEW_PARAM_POSITION].compare(System::Language::translate("quit"))) {
				return pController->quit(input);
			} else if(! resultParams[VIEW_PARAM_POSITION].compare(System::Language::translate("insert"))) {
				return pController->insert(input);
			}  else if(! resultParams[VIEW_PARAM_POSITION].compare(System::Language::translate("welcome"))) {
				return pController->welcome(input);
			}  else if(! resultParams[VIEW_PARAM_POSITION].compare(System::Language::translate("clear"))) {
				return pController->clear(input);
			} else if(! resultParams[VIEW_PARAM_POSITION].compare(System::Language::translate("help"))) {
				return pController->help(input);
			}else if(! resultParams[VIEW_PARAM_POSITION].compare(System::Language::translate("listAll"))) {
				return pController->listAll(input);
			} else if(! resultParams[VIEW_PARAM_POSITION].compare(System::Language::translate("listSchema"))) {
				return pController->listSchema(input);
			} else if(! resultParams[VIEW_PARAM_POSITION].compare(System::Language::translate("remove"))) {
				return pController->remove(input);
			}else if(! resultParams[VIEW_PARAM_POSITION].compare(System::Language::translate("search"))) {
				return pController->search(input);
			} else {
				return pController->index(input);
			}

			return 0;
		}
	};
}

#endif	
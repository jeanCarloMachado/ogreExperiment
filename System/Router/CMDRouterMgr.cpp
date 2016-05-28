#ifndef __SYSCMDRouterMgr__
#define __SYSCMDRouterMgr__

#include <string>
#include <vector>
#include <stdlib.h>

#include "System/Router/RouterMgr.cpp"

using namespace std;

namespace System
{
	/**
	 * implementação do roteador de chamadas para linha
	 * de comando
	 */
	class CMDRouterMgr : public RouterMgr
	{

	public:
		void listen()
		{

			this->rController = new RouterController();

			input = "welcome message";
			rController->route(input);

			for(;;) {
				/**
				 * guarda a string
				 */
				cout << "->";
				getline(cin, input);
				rController->route(input);
			}
		}

	protected:
		string input;
	};
}

 #endif
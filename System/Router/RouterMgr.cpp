#ifndef __SYSRouterMgr__
#define __SYSRouterMgr__

#include "System/Language.cpp"
#include "System/DesignPattern/InterfaceListener.cpp"
#include "System/Router/RouterController.cpp"


namespace System
{
	class RouterMgr : public InterfaceListener
	{
	public:
		virtual void listen()  = 0;

	protected:
		RouterController *rController;
	};
}

#endif
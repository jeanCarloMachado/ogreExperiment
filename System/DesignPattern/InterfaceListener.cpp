#ifndef _SYSInterfaceListener__
#define _SYSInterfaceListener__

#include <vector>

#include "System/Language.h"

namespace System
{
	class InterfaceListener
	{	
	public:	
		virtual void listen() = 0;
	};	
}

#endif
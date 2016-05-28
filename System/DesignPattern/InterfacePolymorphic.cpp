#ifndef _SYSInterfacePolymorphic__
#define _SYSInterfacePolymorphic__

#include <vector>
#include "System/Language.h"

namespace System
{
	class InterfacePolymorphic
	{	
	public:	
		template<typename T>
		void getInstance(std::vector<T> params) {}
	};	
}

#endif
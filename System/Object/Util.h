#ifndef __SYSUtil__
#define __SYSUtil__

#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

namespace System
{

	class Util 
	{
	public:
		template<class T>
		static void dg(T & message)
		{
			Util::sw(message);
			exit(0);
		}	

		template<class T>
		static void sw(T & message)
		{
			cout << message << endl;
		}

		template <class T>
		static void swap_these(T & a, T & b)
		{
			T a_old = a;
			a = b;
			b = a_old;
		}
	};
}
#endif
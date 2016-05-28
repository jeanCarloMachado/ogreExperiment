#ifndef __SYSSTRING__
#define __SYSSTRING__

#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

namespace System
{

	class String 
	{

	public:

		static vector<string> toVector(string str)
		{
			/**
			 * cria o vetor para os parametros
			 */
			 vector<string> result;

			 stringstream data(str);

			 string line;
			while(getline(data,line,' '))
			{
				result.push_back(line);
			}

			return result;
		}
	};
}
#endif
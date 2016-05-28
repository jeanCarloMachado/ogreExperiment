#ifndef __SYSDatabase__
#define __SYSDatabase__

#include <string>
#include <vector>
#include <iostream>
#include <sqlite3.h>
#include <cstdlib>

#include "System/Language.h"

using namespace std;

namespace System
{
	class Database
	{
	public:
		Database();
		virtual ~Database();
		sqlite3* getDriver()
		{
			return this->database;
		}

		bool open(const char* filename);
		vector<vector<string> > query(const char* query);
		void close();

	private:
		sqlite3 *database;
	};
}
#endif



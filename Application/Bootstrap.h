#ifndef __BOOTSTRAP__
#define __BOOTSTRAP__

#include <sqlite3.h>
#include <vector>
#include <string>

#include "System/BootstrapAbstract.h"
#include "System/Db/Database.h"
#include "System/Language.cpp"

#include "System/Db/TableAbstract.h"
#include "Application/ModelProblem.h"
#include "System/Language.h"

using namespace System;

class Bootstrap : System::BootstrapAbstract
{
public:
	void bootstrap();
};
#endif
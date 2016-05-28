#include "Application/Bootstrap.h"

void Bootstrap::bootstrap()
{
	System::Database *db = new System::Database();
	db->open("database.db");

}

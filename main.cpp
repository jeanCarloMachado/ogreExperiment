#include <string>
#include "System/ApplicationMgr.cpp"
#include "System/ApplicationInterface.h"

int main(int argc, char *argv[])
{
	System::ApplicationInterface* app;
	
	try {
		 app = System::ApplicationMgr::Factory(System::ApplicationMgr::CMD);
	} catch (const std::string ex) {
		std::cout << ex << std::endl;
	}

	app->setParams(&argv);
	app->bootstrap();
	app->run();

	delete(app);


}
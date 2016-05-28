#ifndef __ControllerSolution__
#define __ControllerSolution__

#include <iostream>
#include "Application/BaseController.cpp"
#include "Application/ModelProblems.h"

class ControllerSolution : public BaseController
{	
public:
	int insert(std::string params);

	int listAll(std::string params);
	
	int listSchema(std::string params);

	int remove(std::string params);

	int search(std::string params);
};
#endif
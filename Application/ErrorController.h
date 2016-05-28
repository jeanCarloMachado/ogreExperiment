#ifndef __ErrorController__
#define __ErrorController__

#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <stdlib.h>

#include "Application/BaseController.cpp"
#include "Application/ModelProblems.h"
#include "Application/HelperOrderResultByWeight.h"
#include "Application/ModelProblem.h"
#include "Application/ModelSolutions.h"

class ErrorController : public BaseController
{	
public:
	int insert(std::string params);

	int listAll(std::string params);
	
	int listSchema(std::string params);

	int remove(std::string params);

	int search(std::string params);
};
#endif
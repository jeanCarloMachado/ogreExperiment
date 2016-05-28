#ifndef __HelperWeigth__
#define __HelperWeigth__

#include "System/Object/Util.h"
#include "Application/ModelProblems.h"
#include "Application/ModelProblem.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstdlib>


/**
 * PESOS DO SISTEMA
 */
#define H_id 1
#define H_os 0.3
#define H_compiler 0.4
#define H_compiler_version 0.2
#define H_id_error_type 0
#define H_description 0.8
#define H_system_error 0
#define H_system_file 0.6
#define H_title 0.7

class HelperOrderResultByWeight 
{
public:
	void  run(vector<vector<string> > *resultQuery, ModelProblem *pMp);

	 int  getWeight(vector<string> *element, ModelProblem *pMp);

};
	
#endif
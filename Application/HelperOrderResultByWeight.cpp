#include "Application/HelperOrderResultByWeight.h"
#include <cstdlib>


void HelperOrderResultByWeight::run(vector<vector<string> >* resultQuery, ModelProblem *pMp)
{
	ModelProblems mp;

	
	int countTotal  = 0;

	for(vector<vector<string> >::iterator it = resultQuery->begin(); it < resultQuery->end(); ++it)
	{
		countTotal++;
	}
	countTotal--;

	std::cout << countTotal << std::endl;

	int i;
	int j;
	for(i=0;i<countTotal;i++)
	{
	    for(j=0;j<i;j++)
	    {
	       if(getWeight(&resultQuery[0][i],pMp ) > getWeight(&resultQuery[0][j],pMp))
		System::Util::swap_these(resultQuery[0][i],resultQuery[0][j]);
	    }

	}

	
}

 int HelperOrderResultByWeight::getWeight(vector<string> *element,ModelProblem *pMp)
{
	int weight = 0;

	if(!pMp->getId().compare(element->at(ModelProblems::id)))
	{
		weight+= H_id;
	}

	if(!pMp->getTitle().compare(element->at(ModelProblems::title)))
	{
		weight+= H_title;
	}

	
	if(!pMp->getCompiler().compare(element->at(ModelProblems::compiler)))
	{
		weight+= H_compiler;
	}

	if(!pMp->getCompilerVersion().compare(element->at(ModelProblems::compiler_version)))
	{
		weight+= H_compiler_version;
	}

	if(!pMp->getDescription().compare(element->at(ModelProblems::description)))
	{
		weight+= H_description;
	}
	
	if(!pMp->getVendorFile().compare(element->at(ModelProblems::system_file)))
	{
		weight+= H_system_file;
	}
	
	return weight;
}


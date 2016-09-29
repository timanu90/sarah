#include "includes.h"

TKnowledge::TKnowledge()
{
	
}

TKnowledge::~TKnowledge()
{

}

std::string TKnowledge::getResponse(std::string input)
{
	std::string res = "IDK";
#if 0
	int i 			= 0;

	do
	{
		if(std::string(KnowledgeBase[i].input) == input) 
		{ 
            res = KnowledgeBase[i].responses[0];
        } 
        i++;

	}while(i < nKnowledgeBaseSize && (res == ""));
#endif

	return res;
}

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

	res = data.findResponseByKey(input);

	return res;
}

#include "includes.h"

TCommand::TCommand()
{

}

TCommand::~TCommand()
{

}

bool TCommand::isCommand(std::string cmd)
{
	if(cmd == "WHAT TIME IS IT")
	{
		return true;
	}

	return false;
}

std::string TCommand::executeCommand(std::string cmd)
{
	std::string ret = "";
	
	if(cmd == "WHAT TIME IS IT")
	{
		ret = getTime();
	}

	return ret;
}

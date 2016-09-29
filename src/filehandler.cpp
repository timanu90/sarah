#include "includes.h"

TFileHandler::TFileHandler()
{
	knowFileName = "knowledge/en_US/kowledge.list";
	cmdFileName  = "knowledge/en_US/commands.list";

	knowFile.open(knowFileName.c_str());
	cmdFile.open(cmdFileName.c_str());

	if(knowFile.is_open())
	{
		std::cout<<"knowFile sucess\n";
	}

	if(cmdFile.is_open())
	{
		std::cout<<"cmdFile sucess\n";
	}
}

TFileHandler::~TFileHandler()
{

}

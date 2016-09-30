#include "includes.h"

TFileHandler::TFileHandler()
{
	/* @TODO Add option here to change language directory */
	knowFileName = "knowledge/en_US/kowledge.list";
	cmdFileName  = "knowledge/en_US/commands.list";

	knowFile.open(knowFileName.c_str());
	cmdFile.open(cmdFileName.c_str());

#if 0
	if(knowFile.is_open() && cmdFile.is_open())
	{
		std::string line;
		while ( getline (knowFile,line) )
    	{
      		std::cout << line << '\n';
    	}

    	std::cout<<"************************************************\n";

    	while ( getline (cmdFile,line) )
    	{
      		std::cout << line << '\n';
    	}
	}
#endif

}

TFileHandler::~TFileHandler()
{

}

std::string TFileHandler::getKnowledgeStr()
{
	std::string line = "";

	if( knowFile.is_open() )
	{
		while ( getline (knowFile,line) )
    	{
      		if(line[0] != '#')
      		{
      			return line;
      		}
    	}
	}

	return line;
}

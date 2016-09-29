#include "includes.h"

TChatBot::TChatBot()
{

}

TChatBot::~TChatBot()
{

}

void TChatBot::botWork()
{
	std::string input 		= "";
	std::string response 	= "";

	do
	{
		std::cout<<"> ";
		getline(std::cin, input);

		response = know.getResponse(input);

		std::cout<<response<<std::endl;

	}while(input != "bye");
	
}
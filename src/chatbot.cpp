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
	TChatLog    log;

	do
	{
		std::cout<<"> ";
		getline(std::cin, input);

		/* Regist usr input in log */
		log.writeUsrInput(input);

		response = know.getResponse(input);

		/* Regist bot response in log */
		log.writeBotResponde(response);

		std::cout<<response<<std::endl;

	}while(input != "bye");
	
}
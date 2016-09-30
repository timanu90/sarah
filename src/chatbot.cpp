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

		if(input != "")
		{
			/* Regist usr input in log */
			log.writeUsrInput(input);

			if(cmd.isCommand(input))
			{
				response = cmd.executeCommand(input);
			}
			else
			{
				if(input != "bye")
				{
					response = know.getResponse(input);
				}
			}
		
			/* Regist bot response in log */
			log.writeBotResponde(response);

			std::cout<<response<<std::endl;
		}
		else
		{
			std::cout<<"Say something"<<std::endl;
		}

	}while(input != "bye");
	
}
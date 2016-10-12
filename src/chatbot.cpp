#include "includes.h"

TChatBot::TChatBot()
{

}

TChatBot::~TChatBot()
{

}

std::string __remove_special_char(std::string str)
{
	std::string ret = "";

	for(int i=0; i<str.length(); i++)
	{
		if(str[i] != '?' && str[i] != '!' && str[i] != ',' && str[i] != '.')
		{
			ret += str[i];
		}
	}

	return ret;
}

std::string __convert_to_upper_case(std::string str)
{
	std::string ret = "";

	for(int i=0; i<str.length(); i++)
	{
		if( (str[i] >= 'A' && str[i] <= 'Z') || str[i] == ' ')
		{
			ret += str[i];
		}
		else
		{
			ret += str[i] - 32;
		}
	}

	return ret;
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

		input = __remove_special_char(input);
		input = __convert_to_upper_case(input);

		std::cout<<"worked input = "<<input<<std::endl;

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
				if(input != "BYE")
				{
					response = know.getResponse(input);
				}
			}
		
			if(input != "BYE")
			{
				/* Regist bot response in log */
				log.writeBotResponde(response);

				std::cout<<response<<std::endl;
			}
			
		}
		else
		{
			std::cout<<"Say something"<<std::endl;
		}

	}while(input != "BYE");
	
}
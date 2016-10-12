#ifndef __COMMAND_H__
#define __COMMAND_H__

/**
 *	@brief  TCommand class implement the commands known by the bot.
 *	
 *	This class was made to handle all commands. It take the input and if it can execute the command or redirect it to the correct "slave" that can execute it.
 */

class TCommand
{

public:
	TCommand();
	~TCommand();

	bool        isCommand(std::string cmd);
	std::string executeCommand(std::string cmd);
};

#endif
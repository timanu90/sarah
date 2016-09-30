#ifndef __COMMAND_H__
#define __COMMAND_H__

class TCommand
{

public:
	TCommand();
	~TCommand();

	bool        isCommand(std::string cmd);
	std::string executeCommand(std::string cmd);
};

#endif
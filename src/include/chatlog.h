#ifndef __CHATLOG_H__
#define __CHATLOG_H__

class TChatLog
{
	std::string  fileName;
	std::ofstream logFile;

public:
	TChatLog();
	~TChatLog();

	void writeUsrInput		(std::string input);
	void writeBotResponde	(std::string response);
};

#endif
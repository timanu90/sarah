#ifndef __CHATLOG_H__
#define __CHATLOG_H__

/**
 *	@brief  TChatLog class handle and store all conversations records of the bot and the USER.
 *	
 *	This class store and handle strings used in the conversations.
 */

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
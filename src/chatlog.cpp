#include "includes.h"

//file vars
TDateTime date;

TChatLog::TChatLog()
{
	fileName = "log/conversation_log_" + date.getCurrentDate();

	logFile.open(fileName.c_str(), std::ios::app | std::ios::app);

	logFile<<"*************************************************************************"<<std::endl;
	logFile<<"Start at " + date.getCurrentTime()<<std::endl;
}

TChatLog::~TChatLog()
{
	logFile<<"Ended at " + date.getCurrentTime()<<std::endl;
	logFile<<"*************************************************************************"<<std::endl;
	logFile.close();
}

void TChatLog::writeUsrInput(std::string input)
{
	logFile<<"User said: "<<input<<std::endl;
}

void TChatLog::writeBotResponde(std::string response)
{
	logFile<<"Bot said: "<<response<<std::endl;
}

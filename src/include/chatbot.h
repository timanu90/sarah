#ifndef __CHATBOT_H__
#define __CHATBOT_H__

/**
 * Sarah entry class that handle input check data base and send response to output
 */

class TChatBot
{
	TCommand   cmd;
	TKnowledge know;

public:
	TChatBot();
	~TChatBot();

	void botWork();
};

#endif
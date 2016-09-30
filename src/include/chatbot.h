#ifndef __CHATBOT_H__
#define __CHATBOT_H__

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
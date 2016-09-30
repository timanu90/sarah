#ifndef __KNOWLEDGE_H__
#define __KNOWLEDGE_H__

class TKnowledge
{
	TDataBase data;

public:
	TKnowledge();
	~TKnowledge();

	std::string getResponse(std::string input);
};

#endif
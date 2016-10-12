#ifndef __KNOWLEDGE_H__
#define __KNOWLEDGE_H__

/**
 *	@brief  TKnowledge class Handle access to data base
 *	
 *	This class was made to handle accesses to data base. It takes input from chat bot and askdata base for response
 */

class TKnowledge
{
	TDataBase data;

public:
	TKnowledge();
	~TKnowledge();

	std::string getResponse(std::string input);
};

#endif
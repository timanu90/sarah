#ifndef __DATABASE_H__
#define __DATABASE_H__

/**
 *	@brief  TDataBase class handle store all strings realtions
 *	
 *	This class store and handle string relations to build the bot data base of knowledge.
 */

class TDataBase;

class TDataNode
{
	TStrList 	  key;
	TStrList 	  responses;

	TDataNode 	 *next;
	TDataNode 	 *prev;
public:
	TDataNode();
	~TDataNode();

	friend class TDataBase;
};

class TDataBase
{
	TDataNode *first;
	TDataNode *last;

	TFileHandler file;
public:
	TDataBase();
	~TDataBase();

	std::string findResponseByKey(std::string key);

	//dbg function
	void printDataBase();
};


#endif
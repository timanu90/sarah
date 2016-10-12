#ifndef __STRLIST_H__
#define __STRLIST_H__

/**
 *	@brief  STRLIST class is a simple linked list class
 *	
 *	This class was made to handle all list of strings. It implements list and node in diferent classes.
 */

class TStrList;

class TStrListNode
{
public:
	TStrListNode *next;
	TStrListNode *prev;
	std::string   value;

	TStrListNode();
	~TStrListNode();
};

class TStrList
{
	TStrListNode *first;
	TStrListNode *last;
	int count;

public:
	TStrList();
	~TStrList();

	TStrListNode* insert		(std::string item);
	bool isInList	(std::string item);

	void remove		(std::string item);

	std::string getRandomItem();

	//dbg function
	void printList();

};

#endif
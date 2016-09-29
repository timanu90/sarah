#ifndef __STRLIST_H__
#define __STRLIST_H__

class TStrList;

class TStrListNode
{
	TStrListNode *next;
	TStrListNode *prev;
	std::string   value;

public:

	TStrListNode();
	~TStrListNode();

	friend class TStrList;
};

class TStrList
{
	TStrListNode *first;
	TStrListNode *last;
	int count;

public:
	TStrList();
	~TStrList();

	void insert		(std::string item);
	bool isInList	(std::string item);

	void remove		(std::string item);

	//dbg function
	void printList();

};

#endif
#ifndef __COMMANDLIST_H__
#define __COMMANDLIST_H__

class TCommandList;

class TCommandListNode
{
	TCommandListNode *next;
	TCommandListNode *prev;
	TStrListNode     *value;
public:
	TCommandListNode();
	~TCommandListNode();

	friend class TCommandList;
};

class TCommandList
{

public:
	TCommandList();
	~TCommandList();
};

#endif
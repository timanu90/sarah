#include "includes.h"

TDataNode::TDataNode()
{
	next = prev = NULL;
}

TDataNode::~TDataNode()
{

}

//*******************************************************

std::string getString(std::string str)
{
	std::string ret = "";
	int i = 0;

	while(str[i] != '\"'){ i++; }
	i++;

	while(str[i] != '\"'){ ret += str[i++]; }

	return ret;
}

TDataBase::TDataBase()
{
	first = last = NULL;

	std::string str = "";
	TDataNode* node = NULL;

	do
	{
		str = file.getKnowledgeStr();

		if(str == "NODE")
		{
			node = new TDataNode();

			//add to list
			if(first == NULL)
			{
				first = last = node;
			}
			else
			{
				node->next = first;
				first->prev = node;
				first = node;
			}
		}
		else if(str[0] == 'K')
		{
			str = getString(str);
			
			node->key.insert(str);		
		}
		else if(str[0] == 'R')
		{
			str = getString(str);
			
			node->responses.insert(str);
		}

	}while(str != "END");
}

TDataBase::~TDataBase()
{

}

std::string TDataBase::findResponseByKey(std::string key)
{
	TDataNode* node = first;

	while(node != NULL)
	{
		if(node->key.isInList(key))
		{
			return node->responses.getRandomItem();
		}
		node = node->next;
	}

	return "";
}


//dbg funtion
void TDataBase::printDataBase()
{
	TDataNode* node = first;
	int i = 0;

	while(node != NULL)
	{
		std::cout<<"************************************************\n";
		std::cout<<"1tNode "<<i<<std::endl;
		node->key.printList();
		node->responses.printList();
		std::cout<<"************************************************\n";
		node = node->next;
	}
}

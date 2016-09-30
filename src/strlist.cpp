#include "includes.h"

extern TRand rand;

//*********************************************************************
//			NODE ZONE

TStrListNode::TStrListNode()
{
	next = prev = NULL;
	value = "";
}

TStrListNode::~TStrListNode()
{

}


//*********************************************************************
//			LIST ZONE

TStrList::TStrList()
{
	first = last = NULL;
	count = 0;
}

TStrList::~TStrList()
{
	TStrListNode *aux = first;

	while(aux != NULL)
	{
		if(aux->next != NULL)
		{
			aux=aux->next;
			delete aux->prev;
		}
		else
		{
			delete aux;
			aux = NULL;
		}
	}
}

TStrListNode* TStrList::insert(std::string item)
{
	TStrListNode *aux = first;
	TStrListNode *newNode;

	/* Allocate memory for new data */
	newNode = new TStrListNode();
	newNode->value = item;

	/* For now always insert in the head of the list */

	if(first == NULL)
	{
		first = last = newNode;
	}
	else
	{
		newNode->next = first;
		first->prev = newNode;
		first = newNode;
	}
	count++;

	return newNode;
}

bool TStrList::isInList(std::string item)
{
	TStrListNode *aux = first;

	while(aux != NULL)
	{
		if(aux->value == item)
		{
			return true;
		}
		aux = aux->next;
	}

	return false;
}

void TStrList::remove(std::string item)
{

}

int lastRand = 0;
std::string TStrList::getRandomItem()
{
	int i = 0;
	int index;
	TStrListNode *aux;

	do
	{
		index = rand.getRand(count);
	}while(index == lastRand && count > 1);
	lastRand = index;					//lastRand prevent same responses
	
	aux = first;
	while(aux != NULL && i++ < index) { aux = aux->next; }
	
	return aux->value;
}

//dbg function
void TStrList::printList()
{
	TStrListNode *aux = first;


	std::cout<<"********************************************************\n";
	std::cout<<"\tString List\n";
	while(aux != NULL)
	{
		std::cout<<aux->value<<std::endl;
		aux=aux->next;
	}
	std::cout<<"********************************************************\n";
}

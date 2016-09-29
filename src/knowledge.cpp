#include "includes.h"


typedef struct {
    char *input;
    char *responses[3];
}record;

record KnowledgeBase[] = {
    {(char*)"WHAT IS YOUR NAME", 
    {(char*)"MY NAME IS SARAH.",
     (char*)"YOU CAN CALL ME SARAH.",
     (char*)"WHY DO YOU WANT TO KNOW MY NAME?"}
    },

    {(char*)"HI", 
    {(char*)"HI THERE!",
     (char*)"HOW ARE YOU?",
     (char*)"HI!"}
    },
    
    {(char*)"HOW ARE YOU",
    {(char*)"I'M DOING FINE!",
     (char*)"I'M DOING WELL AND YOU?",
     (char*)"WHY DO YOU WANT TO KNOW HOW AM I DOING?"}
    },

    {(char*)"WHO ARE YOU",
    {(char*)"I'M AN A.I PROGRAM.",
     (char*)"I THINK THAT YOU KNOW WHO I'M.",
     (char*)"WHY ARE YOU ASKING?"}
    },

    {(char*)"ARE YOU INTELLIGENT",
    {(char*)"YES,OFCORSE.",
     (char*)"WHAT DO YOU THINK?",
     (char*)"ACTUALY,I'M VERY INTELLIGENT!"}
    },

    {(char*)"ARE YOU REAL",
    {(char*)"DOES THAT QUESTION REALLY MATERS TO YOU?",
     (char*)"WHAT DO YOU MEAN BY THAT?",
     (char*)"I'M AS REAL AS I CAN BE."}
    }
};

size_t nKnowledgeBaseSize = sizeof(KnowledgeBase)/sizeof(KnowledgeBase[0]);


TKnowledge::TKnowledge()
{
	
}

TKnowledge::~TKnowledge()
{

}

std::string TKnowledge::getResponse(std::string input)
{
	std::string res = "";
	int i 			= 0;

	do
	{
		if(std::string(KnowledgeBase[i].input) == input) 
		{ 
            res = KnowledgeBase[i].responses[0];
        } 
        i++;
        
	}while(i < nKnowledgeBaseSize && (res == ""));

	return res;
}

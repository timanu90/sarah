#ifndef __INCLUDES_H__
#define __INCLUDES_H__

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>							//for time
#include <locale>							//for time
#include <fstream>							//for files

//application files
#include "include/rand.h"					//lib to generate rand numbers
#include "include/datetime.h"				//library that get system time and format it to the bot 
#include "include/strlist.h"				//linked list that hold all strings
#include "include/chatlog.h"				//save all bot conversations

#include "include/filehandler.h"			// handle file database read and write
#include "include/cmdhandlers.h"

											// need here a struct for response 
#include "include/command.h"			// data structure for commands
#include "include/database.h"				// data base structure
#include "include/knowledge.h"				// dataBase of chatbot knowledge
#include "include/chatbot.h"				//chatbot main class


#endif
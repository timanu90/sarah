#ifndef __FILEHANDLER_H__
#define __FILEHANDLER_H__

/**
 *	@brief  TFileHandler class handle access to files.
 *	
 *	This class handles all the access to files. To read and fill the data base and to write and update data base knowledge.
 */

class TFileHandler
{
	std::string  cmdFileName;
	std::ifstream cmdFile;
	std::string  knowFileName;
	std::ifstream knowFile;

public:
	TFileHandler();
	~TFileHandler();

	//std::string getKnowledgeStrType();
	std::string getKnowledgeStr();

	//std::string getCommandStr();
};

#endif

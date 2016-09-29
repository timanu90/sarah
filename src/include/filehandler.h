#ifndef __FILEHANDLER_H__
#define __FILEHANDLER_H__

class TFileHandler
{
	std::string  cmdFileName;
	std::ifstream cmdFile;
	std::string  knowFileName;
	std::ifstream knowFile;

public:
	TFileHandler();
	~TFileHandler();
};

#endif

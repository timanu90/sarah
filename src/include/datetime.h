#ifndef __DATETIME_H__
#define __DATETIME_H__

class TDateTime
{
public:
	TDateTime();
	~TDateTime();

	std::string getCurrentTime();
	std::string getCurrentDate();
};


#endif
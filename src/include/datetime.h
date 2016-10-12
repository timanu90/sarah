#ifndef __DATETIME_H__
#define __DATETIME_H__

/**
 *	@brief  TDateTime class handle date and time information.
 *	
 *	This class provides information of date and time to all the bot actions that need date time information.
 */

class TDateTime
{
public:
	TDateTime();
	~TDateTime();

	std::string getCurrentTime();
	std::string getCurrentDate();
};


#endif
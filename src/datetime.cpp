#include "includes.h"

TDateTime::TDateTime()
{

}

TDateTime::~TDateTime()
{

}

std::string TDateTime::getCurrentTime()
{
	time_t rawtime;
  	struct tm * timeinfo;
  	char buffer[80];

  	time (&rawtime);
  	timeinfo = localtime(&rawtime);

  	strftime(buffer,80,"%I:%M:%S",timeinfo);
  	std::string str(buffer);

	return str;
}

std::string TDateTime::getCurrentDate()
{
	time_t rawtime;
  	struct tm * timeinfo;
  	char buffer[80];

  	time (&rawtime);
  	timeinfo = localtime(&rawtime);

  	strftime(buffer,80,"%d-%m-%Y",timeinfo);
  	std::string str(buffer);

	return str;
}

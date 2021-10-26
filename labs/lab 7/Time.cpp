#include "Time.h"
#include <iostream>

using namespace std;

Time::Time()				//constructor
{
	hours=minutes=seconds=0;
	
}

Time::~Time()				//destructor
{

}

Time:: Time(int h, int m, int s)	//set time function
{	
	setHours(h);
	setMinutes(m);
	setSeconds(s);
}

int Time:: getHours()			//Hour Accessor
{
	return hours;
}

void Time:: setHours(int val)		//Hour Mutator
{
	hours = val;
}

int Time:: getMinutes()			//Minutes Accessor
{
	return minutes;
}

void Time:: setMinutes(int val)		//Minutes Mutator
{
	minutes = val;
}

int Time:: getSeconds()			//Seconds Accessor
{
	return seconds;
}

void Time:: setSeconds(int val)		//Seconds Mutator
{
	seconds = val;
}



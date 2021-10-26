#include <iostream>
#include "Time.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
using namespace std;

bool getTimeFromUser( int &seconds, int &minutes, int &hour, Time &time);	//gets time from user
void print24H(Time time, Time time2);						//prints out time


int seconds, minutes, hour;	//times that will be changed and sent to class Time

int main()
{
	
	cout<<"Enter the start time for the lecture (format is HH:MM:SS): ";
	Time start;			//object that will access class to send starting time values
	
        if(getTimeFromUser(hour, minutes, seconds, start))			//checks if starting time is correct
        {
		
        	cout<<"Enter the end time for the lecture (format is HH:MM:SS): ";
		Time end;		//object that will access class to send ending time values
		
        	if(getTimeFromUser(hour, minutes, seconds,end))		//checks if ending time is correct
        	{
			
			print24H(start, end);		//calls function to print out times
        	}

        	else
        	{
        	        cout<<"The end time is invalid!!"<<endl;	//if ending time is invalid print this
        	}

    	}

        else
    	{
        	cout<<"The start time is invalid"<<endl;	//if starting time is invalid print this
    	}

}

//GET TIME FROM USER FUNCTION
bool getTimeFromUser( int &seconds, int &minutes, int &hour, Time &time)
{
	string timer;					//string in which user's input will be stored
    	getline(cin,timer);					//enables user to enter time
    
    
    	if(timer.length() != 8 || timer.substr(2,1) != ":"||timer.substr(5,1) != ":")	//makes sure that format is correct and it includes ":" at certain positions
    	{
    		return false;									//Invalid
    	}
	
   
    	else										//if this format is correct then assign user's values to struct values
    	{
		
		//Converting parts of string to variables
    		seconds = atoi(timer.substr(6,2).c_str());
    		hour = atoi(timer.substr(0,2).c_str());
    		minutes = atoi(timer.substr(3,2).c_str());

    	if(seconds >= 0 && seconds <=59 && minutes >= 0			//checks if boundaries of time are correct
    	   && minutes <=59 && hour >=0 && hour <= 24)

    	{
 		time = Time(hour, minutes, seconds);			//sending class Time, the time value
	     
    	     return true;								//Valid
	   
    	}

  	else
   	{
       	    return false;								//invalid
   	}
   }

}

//PRINT TIMES FUNCTION
void print24H(Time time, Time time2)					
{
		cout << "The lecture starts at ";
		cout << setfill('0') << setw(2) << time.getHours() << ":";
		cout << setfill('0') << setw(2) << time.getMinutes() << ":";
		cout << setfill('0') << setw(2) << time.getSeconds();
		cout << " and ends at ";
		cout << setfill('0') << setw(2) << time2.getHours() << ":";
		cout << setfill('0') << setw(2) << time2.getMinutes() << ":";
		cout << setfill('0') << setw(2) << time2.getSeconds()<<endl;
	
}

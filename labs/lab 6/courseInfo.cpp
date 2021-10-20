#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iomanip>
#include <fstream>

using namespace std;

    struct Course
    {
    string name;
    int courseNumber;
    int credits;
    int majorRequirement;
    double avgGrade;
    string days;
    }courseInf;

    struct Time		//structure of time that will store time variables
    {
    int hour;		//will store hours
    int minutes;	//will store minutes
    int seconds;	//will store seconds
    } ending, start;	//objects that will be able to get the start and end time

bool getTimeFromUser(struct Time &time, string timer);	//will check if time format is valid

void courseInfo(struct Course info,string &endingTime, string &startTime, int j);	//will print out 

void print24H(struct Time start, struct Time ending);	//will print out times

int main()
{
    ifstream file("in.txt");				//opens file
    int coursNum;					//will store number of courses

    file>>coursNum;

    cout<<"---------------------";
    cout<<"\nSCHEDULE OF STUDENT";    
    
    string startTime;					//will store start time
    string endingTime;					//will store end time			
    
    int j=0;						//keeps track of #of courses
    int z=0;						//used in while loop to stop when all courses are printed out
    while(z<coursNum)					//enables the printing of all course info
    {
        j++;						//advance to next course

	cout<<"\n---------------------"<<endl;
    	z++;
    	courseInfo(courseInf,endingTime,startTime, j);

    	if(getTimeFromUser(start,startTime))		//checks if starting time is correct
    	{

        	if(getTimeFromUser(ending, endingTime))	//checks if ending time is correct
        	{

		print24H(start,ending);			//calls function to print out times
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

}

//GET TIME FROM USER
bool getTimeFromUser(struct Time &time, string timer)
{

    if(timer.length() != 8 || timer.substr(2,1) != ":"||timer.substr(5,1) != ":")	//makes sure that format is correct and it includes ":" at certain positions
    {
    	return false;									//Invalid
    }

    else										//if this format is correct then assign user's values to struct values
    {
	//Converting parts of string to variables
    	time.seconds = atoi(timer.substr(6,2).c_str());
    	time.hour = atoi(timer.substr(0,2).c_str());
    	time.minutes = atoi(timer.substr(3,2).c_str());

    	if(time.seconds >= 0 && time.seconds <=59 && time.minutes >= 0			//checks if boundaries of time are correct
    	   && time.minutes <=59 && time.hour >=0 && time.hour <= 24)
    	{
    	     return true;
    	}
   	else										//Valid
   	{
       	    return false;								//invalid
   	}
   }

}
//PRINTS OUT TIME
void print24H(struct Time start, struct Time ending)
{
	cout << "The lecture starts at ";
	cout << setfill('0') << setw(2) << start.hour << ":";
	cout << setfill('0') << setw(2) << start.minutes << ":";
	cout << setfill('0') << setw(2) << start.seconds;
	cout << " and ends at ";
	cout << setfill('0') << setw(2) << ending.hour << ":";
	cout << setfill('0') << setw(2) << ending.minutes << ":";
	cout << setfill('0') << setw(2) << ending.seconds<<endl;
}

//COURSE INFO
void courseInfo(struct Course info,string &endingTime, string &startTime, int j)
{
	ifstream file("in.txt");	//opens file to be read
	int i=0;			//will keep track of what is being read
	int dummy;			
	file>>dummy;			//reads the number of courses everytime file has to be read
		
		//will store values in these structure variables, reading them section by section
		while(file >> info.name>> info.credits>>info.majorRequirement
        	     >>info.avgGrade >>info.days>>startTime>>endingTime)
		{
			i++;
			if(i==j)				//if true break loop. Makes it so variables of file can be stored in proper order
			{							
				break;				//break loop
			}

		}
	//course name
	cout<<"COURSE "<<j<< ": " << info.name<<endl;		

	//major requirement?
	if(info.majorRequirement == 1)			
	{
	cout<<"Note: this course is a major requirement..."<<endl;
	}

	else
	{
	cout<<"Note: this course is not a major requirement..."<<endl;
	}
	//number of credits
	cout<<"Number of credits: "<< info.credits<<endl;
	
	//days of lectures
	cout<<"Days of lectures: "<<info.days<<endl;

	//average grade
	cout<<"Stat: on average students get "<<info.avgGrade<<"%"<<" in this course."<<endl;	
	
	//lecture times
	cout<<"Lecture Time: ";

}

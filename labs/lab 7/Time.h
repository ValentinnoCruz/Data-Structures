class Time
{
	public:
		Time();				//constructor
		Time(int h, int m, int s);	//second constructor
		~Time();
		//Accessors
		int getHours();
		int getMinutes();
		int getSeconds();
		//Mutators
		void setHours(int val);
		void setMinutes(int val);
		void setSeconds(int val);
		

	private:
		int minutes, hours, seconds;


};

#pragma once
class Time
{
private: 
	int hour;
	int min;
	int sec;
public:
	Time(int sec)
	{   
		hour =sec / 3600;
		min = (sec % 3600) / 60;
		this->sec = sec % 60;
		
		
		
	}
	Time(int hour,int min, int sec)
	{
		this->hour = hour;	
		this->min = min;
		this->sec = sec;
	}
	void print()
	{
		cout << hour<<":" << min<<":" << sec;
		cout << endl;
	}
	Time add(Time t2)
	{
		return Time(t2.toSec() + toSec());
	}
	int toSec()
	{
		return(sec + min * 60 + hour * 3600);
	}
};


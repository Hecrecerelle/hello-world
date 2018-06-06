#include <iostream>
using namespace std;

//class define 
class Date {
public:
  Date(int y, int m, int d);
  ~Date();
  
  bool judge_run(void);
  void nextDay();
  void previousDay();
  bool equal(Date other);
  void show();
private:
  int year;
  int month;
  int day;
};

int main() {
  Date today(2018,3,20);
  Date day(2018,3,20);
  day.show();
  for(int i=0;i<30;i++)
    day.nextDay();
  day.show();
  for(int i=0;i<30;i++)
    day.previousDay();
  day.show();
  if(day.equal(today))
    printf("Very Good!\n");
  else
    printf("Very Bad!\n");
  return 0;
}

//function decarlation

Date::Date(int y,int m,int d)
{
	this->year=y;
	this->month=m;
	this->day=d;
}

bool Date::judge_run(void)
{
	if(year%100)//不是整百年
	{
		if(year%4)//不是闰年
		{
			return 1;//平年返回真 
		} 
		 else
		{
		 	return 0;//闰年返回假 
		}
	}
	else//正百年 
	{
		if(year%400)//不是闰年 
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

void Date::nextDay(void)
{
	++day;
	if((month==2) && Date::judge_run())//2月28天 
	{
		if(day>28)
		{
			month++;
			day=1;
		}
	}
	else if((month==2) && !Date::judge_run())//2月29天 
	{
		if(day>29)
		{
			month++;
			day=1;
		}
	}
	else if((month==1) ||(month==3) ||(month==5) ||(month==7) ||(month==8) ||(month==10) ||(month==12) )//大月
	{
		if(day>31)
		{
			month++;
			day=1;
		}
	}
	else//小月
	{
		if(day>31)
		{
			month++;
			day=1;
		}
	}
	if(month>12)
	{
		year++;
		month=1;
	}
}

void Date::previousDay()
{
	--day;
	if((month==3) && Date::judge_run())//2月28天 
	{
		if(!day)
		{
			day=28;
			month--;
		}
	}
	else if((month==3) && !Date::judge_run())//2月29天 
	{
		if(!day)
		{
			day=29;
			month--;
		}
	}
	else if((month==1) ||(month==3) ||(month==5) ||(month==7) ||(month==8) ||(month==10) ||(month==12) )//大月
	{
		if(!day)
		{
			day=30;
			month--;
		}
	}
	else
	{
		if(!day)
		{
			day=31;
			month--;
		}
	}
	if(!month)
	{
		year--;
	}
}

void Date::show()
{
	cout<<"today is "<<year<<"."<<month<<"."<<day<<endl;
}

bool Date::equal(Date other)
{
	return ((this->year=other.year) && (this->month=other.month) && (this->year=other.month));
}

Date::~Date()
{
	cout<<"object has destructed!"<<endl; 
}

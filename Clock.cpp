#include <iostream>
#include <ctime> 
using namespace std;


class Clock
{
	public:
		Clock();
		~Clock();
		void tick(void);
		void show(int a);
		void adjust(int year,int month,int day,int hour,int minute,float second);
		int judge_run(int year);
	private:
		int year;
		int month;
		int day;
		int hour;
		int minute;
		float second;
};


Clock::Clock()
{
	;
}

Clock::~Clock()
{
	;
}

Clock::adjust(int year,int month,int day,int hour,int minute,float second)//illicialize the varible
{
	this->year=year;
	this->month=month;
	this->day=day;
	this->hour=hour;
	this->minute=minute;
	this->second=second;

int Clock::show(int a)
{
	if(a)
	{
		cout<<"现在是"<<year<<"年"<<month<<"月"<<day<<"日"<< hour<<"时"<<minute<<"分"<<second<<"秒"<<endl; 
	}
}

void Clock::judge_run(int year)//判断是否是闰年 
{
	
}

int main() {
  Clock ck;
  ck.tick;
  ck.show();
  ck.adjust(16,45,00);
  ck.show();
  return 0;
}

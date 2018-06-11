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
		void adjust()
		{
			;
		}
		void judge_run(int year);
	private:
		int year;
		int month;
		int day;
		int hour;
		int minute;
		float second;
		struct tm*local;
};


Clock::Clock()
{
	;
}

Clock::~Clock()
{
	;
}

void Clock::adjust(int year,int month,int day,int hour,int minute,float second)//illicialize the varible
{
	this->year=year;
	this->month=month;
	this->day=day;
	this->hour=hour;
	this->minute=minute;
	this->second=second;
}
void Clock::show(int a)
{
	if(a)
	{
		cout<<"������"<<year<<"��"<<month<<"��"<<day<<"��"<< hour<<"ʱ"<<minute<<"��"<<second<<"��"<<endl; 
	}
}

void Clock::judge_run(int year)//�ж��Ƿ������� 
{
	if(year%400)
	{
		if(!(year%100))
			cout<<"��һ����ƽ��"<<endl;
		else
		{
			if(year%4)
				cout<<"��һ����ƽ��"<<endl;
			else
				cout<<"��һ��������"<<endl;
		}
	}
	else
	{
		cout<<"��һ��������"<<endl;
	}
}

void Clock::tick()
{
	time_t it=time(NULL);
	local=localtime(& it);
	this->year=local->tm_year+1900;
	this->month=local->tm_mon+1;
	this->day=local->tm_mday;
	this->hour=local->tm_hour;
	this->minute=local->tm_min;
	this->second=local->tm_sec;
}

int main() 
{
  Clock ck;
  ck.tick();
  ck.show(1);
  ck.adjust(18,1,1,16,45,00);
  ck.show(1);
  return 0;
}

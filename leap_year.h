#include <iostream>
#ifndef _judge
#define _judge
using namespace std;
class date
{
	public:
	void func(int year)
	{
		if((year%100==0)&&(year%400==0))
			cout<<"leap_year"<<endl;
		else if((year%100!=0) && (year%4==0))
			cout<<"leap_year"<<endl;
		else
			cout<<"not_a_leap_year"<<endl;
	}
};
#endif

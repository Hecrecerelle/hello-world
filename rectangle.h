#ifndef _sclass_
#define _sclass_


#include <iostream>
using namespace std;

class rectangle
{
public:
	rectangle();//declare constructed function
	rectangle(double, double);//declare overloaded constructed function
	~rectangle();//declare destructed fucntion
				 //declare member function
	void setsize(double, double);
	double getlength();
	double getwidth();
	double getarea();
	void print();
private:
	double length;
	double width;
};
#endif
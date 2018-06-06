#include "rectangle.h"


rectangle::rectangle()//initializing the int variable "lenth" and "width"
{
	length = 0;
	width = 0;
}


rectangle::rectangle(double l, double w)//get value form stdin
{
	length = l;
	width = w;
}


void rectangle::setsize(double l, double w)
{
	length = l;
	width = w;
}
double rectangle::getlength()
{
	return length;
}


double rectangle::getwidth()
{
	return width;
}


double rectangle::getarea()
{
	return width * length;
}


void rectangle::print()
{
	cout << "length: " << length << "\twidth: " << width << "\tarea: " << getarea() << endl;
}


rectangle::~rectangle()
{
	;
}
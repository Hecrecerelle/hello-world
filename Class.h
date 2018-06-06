#ifndef _class_
#define _class_

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;


class cpoint
{
public:
	cpoint(double xx = 0, double yy = 0)//declare constructed function
	{
		x = xx;
		y = yy;
	}

	double getx()
	{
		return x;
	}

	double gety()
	{
		return y;
	}

	friend double fdist(const cpoint &p1, const cpoint &p2);
private:
	double x, y;
};


double fdist(const cpoint &p1, const cpoint &p2)
{
	double x = double(p1.x - p2.x);
	double y = double(p1.y - p2.y);
	return sqrt(x*x + y * y);
}
#endif
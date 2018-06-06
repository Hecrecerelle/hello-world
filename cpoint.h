#ifndef _SCLASS2_8_CPOINT_H_
#define _SCLASS2_8_CPOINT_H_

#include <iostream>
using namespace std;

class cpoint
{
	public:
		cpoint(int x1,int y1);
		cpoint(cpoint &obj);//申明拷贝构造函数
		int getx(void);
		int gety(void);
	private:
	int x;
	int y; 
};
#endif

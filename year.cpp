#include "year.h"



year::year(int y)//构造函数
{
	x = y;
}
year::year(year &obj)//拷贝构造函数
{
	x = obj.x;
}
void year::print(void)//定义成员函数
{
	cout << x << endl;
}
year::~year()//定义析构函数
{
	cout << "析构" << x << "对象" << endl;
}
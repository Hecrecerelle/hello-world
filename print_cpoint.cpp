#include "cpoint.h"
cpoint::cpoint(float x1, float y1)//定义重载构造函数  初始化变量x y
{
	x = x1;
	y = y1;
}
void cpoint::move(float x1, float y1)//定义成员函数
{
	x = x1;
	y = y1;
}
cpoint::cpoint()
{
	;
}
cpoint::~cpoint()
{
	;
}
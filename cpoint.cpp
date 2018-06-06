#include "cpoint.h"
cpoint::cpoint(int x1,int y1)
{
	x=x1;
	y=y1;
}
cpoint::cpoint(cpoint &obj)//¿½±´¹¹Ôìº¯Êý
{
	x=obj.x;
	y=obj.y;
} 
int cpoint::getx(void)
{
	return x;
}
int cpoint::gety(void)
{
	return y;
}

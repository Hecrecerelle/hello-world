#include <iostream>
#ifndef _asd_
#define _asd_
using namespace std;
class cpoint
{
public:
	cpoint();//声明构造函数
	~cpoint();//声明析构函数
	cpoint(float x1, float y1);//声明重载构造函数
	void move(float x1, float y1);//声明成员函数
	float x;//变量声明
	float y;//变量声明
};
#endif
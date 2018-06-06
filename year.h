#include <iostream>
#ifndef _class_
#define _class_
using namespace std;
class year
{
public:
	year(int y);//声明构造函数
	year(year &obj);//声明拷贝构造函数
	~year();//声明析构函数
	void print(void);
private:
	int x;
};
#endif
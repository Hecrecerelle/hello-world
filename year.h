#include <iostream>
#ifndef _class_
#define _class_
using namespace std;
class year
{
public:
	year(int y);//�������캯��
	year(year &obj);//�����������캯��
	~year();//������������
	void print(void);
private:
	int x;
};
#endif
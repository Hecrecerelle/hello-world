#include <iostream>
#ifndef _asd_
#define _asd_
using namespace std;
class cpoint
{
public:
	cpoint();//�������캯��
	~cpoint();//������������
	cpoint(float x1, float y1);//�������ع��캯��
	void move(float x1, float y1);//������Ա����
	float x;//��������
	float y;//��������
};
#endif
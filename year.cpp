#include "year.h"



year::year(int y)//���캯��
{
	x = y;
}
year::year(year &obj)//�������캯��
{
	x = obj.x;
}
void year::print(void)//�����Ա����
{
	cout << x << endl;
}
year::~year()//������������
{
	cout << "����" << x << "����" << endl;
}
#include "cpoint.h"
int main()
{
	cpoint *p = new cpoint[5];
	for (int i = 0; i<5; i++)
	{
		p[i].move(i, i);
	}
	for (int i = 0; i<5; i++)
	{
		cout << p[i].x << " , " << p[i].y << endl;//���е����ݳ�Ա�������������
	}
	delete[]p;
	return 0;
}
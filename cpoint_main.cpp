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
		cout << p[i].x << " , " << p[i].y << endl;//公有的数据成员可以在类外访问
	}
	delete[]p;
	return 0;
}
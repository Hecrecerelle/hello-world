#include "prime.h"


int main()
{
	int index;
	for (index = 100; index <= 9999; index++)
	{
		prime number(index);//��ʼ��˽�г�Ա  ��ֵΪindex
		//���ó�Ա����isprime�ж�ÿһ�������Ƿ�Ϊ����
		if (!(number.isprime(index)))
		{
			continue;
		}
		if (!(number.isprime(number.multibit())))
		{
			continue;
		}
		if (!(number.isprime(number.squaremultibit())))
		{
			continue;
		}
		if (!(number.isprime(number.sumbit())))
		{
			continue;
		}
		cout << index << endl;
	}
	getchar();
	return 0;
}
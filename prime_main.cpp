#include "prime.h"


int main()
{
	int index;
	for (index = 100; index <= 9999; index++)
	{
		prime number(index);//初始化私有成员  其值为index
		//调用成员函数isprime判定每一中数据是否为素数
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
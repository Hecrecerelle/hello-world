#include "year.h"
#include <stdlib.h>
int main()
{
	year high(2013);
	year uni(high);
	high.print();
	uni.print();
	uni.~year();
	high.~year();
	system("pause");
	return 0;
}
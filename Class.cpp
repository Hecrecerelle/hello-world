#include "Class.h"

int main()
{
	const cpoint a(1, 1);
	const cpoint b(4, 5);
	cout << "the distance is: " << fdist(a, b) << endl;
	system("pause");
	return 0;
}
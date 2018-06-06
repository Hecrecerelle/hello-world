#include "rectangle.h"


int main()
{
	rectangle *rp = new rectangle(10, 5);//allocate heap memory for rectangle


	rp->print();
	rp->setsize(45, 20);
	cout << "changed area is " << rp->getarea() << endl;
	delete rp;
	return 0;
}
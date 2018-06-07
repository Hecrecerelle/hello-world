#include <iostream>
using namespace std;
class test
{
	public:
		test()
		{
			cout<<"this is a construct function without parameters"<<endl;
		}
		test(int a)
		{
			this->num=a;
			cout<<"this is a construct function with a parameter: "<<this->num<<endl; 
		}
	private:
		int num;
};
int main()
{
	test m;
	test n(1);
	return 0;
}

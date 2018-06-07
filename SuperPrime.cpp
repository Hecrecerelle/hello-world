#include <iostream>
using namespace std;


class prime
{
public:
	prime(int num)//constructed function					//initialize the variable "num"
	{
		this->num=num;
	}
	~prime()//destructed function
	{
	}
	bool isprime(int num)//judge prime
	{
		int index;
		for(index=2;index<this->num;index++)
		{
			if(!(this->num%index))
				return 0;
		}
		return 1;
	}
	int sumbit()//return the sum of each bits
	{
		int a=this->num;
		int sum=0;
		while(a)
		{
			sum+=(a%10);
			a/=10;
		}
		return sum;
	}
	int multibit()//return the multi of each bits
	{
		int a=this->num;
		int mul=1;
		while(a)
		{
			mul*=(a%10);
			a/=10;
		}
	}
	int squaremultibit()//return the suqre of each bits
	{
		int a=this->num;
		int sqmul=0;
		while(a)
		{
			sqmul+=((a%10)*(a%10));
			a/=10;
		}
	}
private:
	int num;
};	



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

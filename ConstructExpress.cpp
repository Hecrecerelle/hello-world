#include <iostream>
using namespace std;
int func(int a,int b)
{
	if(a>b)
	{
		a=a%b;
		if(!a)
			return b;
		return func(b,a);
	}
	else
	{
		b=b%a;
		if(!b)
			return a;
		return func(a,b);
	}
}

class rational
{
	friend ostream & operator << (ostream &cout,rational &obj)
	{
		cout<<obj.num1<<"/"<<obj.num2<<endl;
	}
	private:
		int num1;
		int num2;
	public:
		rational(int a,int b)
		{
			this->num1=a;
			this->num2=b;
		}
		rational()
		{
			
		}
		//rational *resualt=new rational;
		rational operator * (rational obj)
		{
			int i=this->num1*obj.num1;
			int j=this->num2*obj.num2;
			rational resualt;
			resualt.num1=i/func(i,j);
			resualt.num2=j/func(i,j);
			return resualt;
		}
		rational operator + (rational obj)
		{
			int i=this->num1*obj.num2;
			int j=this->num2*obj.num1;
			int k=this->num2*obj.num2;
			int m=i+j;
			rational resualt;
			resualt.num1=m/func(m,k);
			resualt.num2=j/func(m,k);
			return resualt;
		}
		rational operator - (rational obj)
		{
			int i=this->num1*obj.num2;
			int j=this->num2*obj.num1;
			int k=this->num2*obj.num2;
			int m=i-j;
			rational resualt;
			resualt.num1=m/func(m,k);
			resualt.num2=j/func(m,k);
			return resualt;
		}
		rational operator / (rational obj)
		{
			int i=this->num1*obj.num2;
			int j=this->num2*obj.num1;
			rational resualt;
			resualt.num1=i/func(i,j);
			resualt.num2=j/func(i,j);
			return resualt;
		}
}; 
int main()
{
	rational number1(1,2);
	rational number2(3,4);
	rational resualt;
	resualt=number1+number2;
	cout<<resualt;
	resualt=number1-number2;
	cout<<resualt;
	resualt=number1*number2;
	cout<<resualt;
	resualt=number1/number2;
	cout<<resualt;
	return 0;
}

#include <iostream>
using namespace std; 
class Parallelogram 
{
	public:
		Parallelogram(int h,int l);
		~Parallelogram();
		void show();
		void area();
		void height();
		void length();
	private:
		int h;
		int l;
};
int main() 
{
	int h,l;
	cin>>h>>l;
  	Parallelogram pg(h,l);
  	pg.show();
  	pg.area();
  	pg.height();
  	pg.length();
 	return 0;
}

//function define
Parallelogram::Parallelogram(int h,int l)
{
	this->l=l;
	this->h=h;
}

Parallelogram::~Parallelogram()
{
}

void Parallelogram::show()
{
	cout<<"this is a parallelogram."<<endl;
}

void Parallelogram::area()
{
	cout<<"the Parallelogram's area is "<<l*h<<endl;
}

void Parallelogram::height()
{
	cout<<"the Parallelogram's height is "<<h<<endl;
}

void Parallelogram::length()
{
	cout<<"the Parallelogram's lenth is "<<l<<endl;
}

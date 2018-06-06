#include <iostream>
using namespace std;


class prime
{
public:
	prime(int num);//constructed function
					//initialize the variable "num"
	~prime();//destructed function
	bool isprime(int num);//judge prime
	int sumbit();//return the sum of each bits
	int multibit();//return the multi of each bits
	int squaremultibit();//return the suqre of each bits
private:
	int mnum;
};	
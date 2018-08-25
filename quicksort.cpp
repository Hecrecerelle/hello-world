#include <iostream>
using namespace std;
void func(int *num,int first,int last)
{
	if(first >= last)
    {
        return ;
    }
	int key=*(num+first);
	int first_cpy=first;
	int last_cpy=last;
	while(first<last)
	{
        while(first < last && key <= *(num+last)) 
        {
            last--;
        }
        int temp=*(num+last);
        *(num+last)=*(num+first);
        *(num+first)=temp;
        while(first < last && key >= *(num+last))
        {
            first++;
        }
		temp=*(num+last);
        *(num+last)=*(num+first);
        *(num+first)=temp;
	}
	func(num,first_cpy,first-1);
	func(num,first+1,last_cpy);	
}
int main()
{
	int a[10]={9,8,7,6,5,4,3,2,1,0};
	func(a,0,9);
	int index;
	for(index=0;index<10;index++)
	{
		cout<<a[index]<<endl;
	}
	return 0;
}

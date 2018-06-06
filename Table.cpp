#include <iostream>
using namespace std;

class Table
{
	public:
		Table();
		Table(int m,int n)
		{
			this->row=m;
			this->col=n;
		}
		~Table;
		void addRow(int *col)
		{
			int i;
			for(i=0;i<this->col;i++)
			{
				cin>>col[i];
			}
		}
		void addColumn(int *row)
		{
			int i;
			for(i=0;i<this->row;i++)
			{
				cin>>row[i];
			}
		}
		void delRow(int num);
		{
			delete []col[i];
		}
		void show(int *row)
		{
			int i;
			for(i=0;i<this->col;i++)
			{
				cout>>row[i]>>" ";
			}
			cout<<endl;
		}
	private:
		int row,col;
}
 
int main() 
{
  Table tb;
  tb.show();
  tb.addRow();
  tb.show();
  tb.addColumn();
  tb.show();
  Table tb1(5,5);
  tb1.show();
  tb1.set(1,1,30);
  tb1.set(2,2,"hello");
  tb1.show();
  tb1.delRow(1);
  tb1.show();
  tb1.delColumn(1);
  tb1.show();
  return 0;
}

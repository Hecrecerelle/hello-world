#include <iostream>
#include <string>
using namespace std;
 
class Cell 
{
	friend class Table;
public:
  Cell(string con)
  {
  	this->content=con;
  }
  Cell()
  {
  }
  ~Cell()
  {
  }
  void show()
  {
  	cout<<content<<endl;
  }
private:
  string content;
};
class Table
{
public:

  void setRow(int row)
  {
  }
  void show()
  {
	cout<<this->cells->content;
  }
  int addRow()
  {
  }
  void delRow(int n)
  {
  }
  int addColumn()
  {
  }
  void delColumn(int n)
  {
  }
private:
	int row;
  	Cell *cells=new Cell[];
};
int main() 
{
  	Table tb;
  	tb.show();
  	tb.addRow();
  	tb.show();
  	tb.addColumn();
  	tb.show();
//  Table tb1(5,5);
//  tb1.show();
//  tb1.set(1,1,30);
//  tb1.set(2,2,"hello");
//  tb1.show();
//  tb1.delRow(1);
//  tb1.show();
//  tb1.delColumn(1);
//  tb1.show();
  return 0;
}

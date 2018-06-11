#include <iostream>
#include <string>
using namespace std;

//class pages
//{
//	private:
//		int page_no;
//		int page
//}

class Chapter2 
{
public:
  Chapter2()
  {}
  Chapter2(string &title, int pages):pages(pages),title(title) {}
  void show() const {}
private:
  const string title;
  const int pages; 
  Chapter2(const Chapter2 &obj) {}
};
int main()
{
	return 0;
}

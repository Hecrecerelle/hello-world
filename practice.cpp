#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cstdio>
using namespace std;
class get_info
{
	protected:
		string name;
		string phone_number;
		string id;
	public:
		get_info(string name,string phone_number,string id)
		{
			this->name=name;
			this->id=id;
			this->phone_number=phone_number;
		}
};
class book:virtual public get_info
{
	private:
		string bookk;
		string unret_book;
	public:
		book(string bookk,string unret_book,string name,string phone_number,string id):get_info(name,phone_number,id)
		{
			this->bookk=bookk;
			this->unret_book=unret_book;
		}
		void display1()
		{
			string *a=new string[2];
			*a="�鱻����"; 
			*(a+1)="�黹��"; 
			int number;
			srand((unsigned)time(NULL));
			number=rand()%3;
			cout<<this->bookk<<": "<<*(a+number)<<endl;
		}
		void display2() 
		{
			string *a=new string[2];
			*a="���Ѿ�����"; 
			*(a+1)="��û�е���"; 
			int number;
			srand((unsigned)time(NULL));
			number=rand()%3;
			cout<<this->unret_book<<": "<<*(a+number)<<endl;
		}
};
class kd:virtual public get_info
{
	private:
		string location;
		string package_id;
		string status;
	public:
		kd(string location,string package_id,string status,string name,string phone_number,string id):get_info(name,phone_number,id)
		{
			this->location=location;
			this->package_id=package_id;
			this->status=status;
		}
		void search()
		{
			string *a=new string[3];
			*a="�������·��"; 
			*(a+1)="���δ����";
			*(a+2)="����Ѿ�����"; 
			int number;
			srand((unsigned)time(NULL));
			number=rand()%4;
			cout<<*(a+number)<<endl;
		}
};
class study:virtual public get_info
{
	private:
		string lou;
	public:
		study(string lou,string name,string phone_number,string id):get_info(name,phone_number,id)
		{
			this->lou=lou;
		}
		void search_status()
		{
			string *a=new string[2];
			*a="�ý��ҿ���"; 
			*(a+1)="�ý��Ҳ�����"; 
			int number;
			srand((unsigned)time(NULL));
			number=rand()%3;
			cout<<*(a+number)<<endl;
		}
};
int main()
{
	string stu,pho_num,stu_id,location,kd_id,statu,lou,book0,unretbook0;
	string service;
	cout<<"��������ѡ��ķ��񣺣�ͼ��&���&���Ҳ�ѯ��"<<endl;
	cin>>service;
	string item1="ͼ��";
	string item2="���";
	string item3="���Ҳ�ѯ";
	if(service==item1)
	{
		cout<<"�����������ѧ���ֻ���Ҫ��ѯ����Ҫ������"<<endl;
		cin>>stu>>stu_id>>pho_num>>book0>>unretbook0;
		book student(book0,unretbook0,stu,pho_num,stu_id) ;
		student.display1();
		student.display2();
	}
	else if(service==item2)
	{
		cout<<"�����������ѧ���ֻ��ſ�ݵ�ַ����״̬"<<endl;
		cin>>stu>>stu_id>>pho_num>>location>>kd_id>>statu;
		kd student(location,kd_id,statu,stu,pho_num,stu_id);
		student.search();
		
	}
	else if(service==item3)
	{
		cout<<"�����������ѧ���ֻ��Ž�ѧ¥"<<endl;
		cin>>stu>>stu_id>>pho_num>>lou;
		study student(lou,stu,pho_num,stu_id);
		student.search_status();
		
	}
	else
	{
		cout<<"input error!"<<endl; 
	 } 
	return 0;
}


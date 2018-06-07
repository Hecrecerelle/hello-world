#include <iostream>
#include <string>
using namespace std;
class employee
{
	protected:
		string name;
		string id;
		string salary_class;
		float salary;
		float base_salary;
		float add_salary;
		float sub_salary;
	public:
		employee(string name,string id,string salary_class,float salary,float base_salary,float add_salary,float sub_salary)
		{
			this->name=name;
			this->id=id;
			this->salary_class=salary_class;
			this->salary=salary;
			this->base_salary=base_salary;
			this->add_salary=add_salary;
			this->sub_salary=sub_salary;
		}
		void display()
		{
			cout<<"name: "<<name<<endl<<"id: "<<id<<endl<<"salary: "<<salary<<endl;
		}
		employee(employee &obj)
		{
			this->name=obj.name;
			this->id=obj.id;
			this->salary_class=obj.salary_class;
			this->salary=obj.salary;
			this->base_salary=obj.base_salary;
			this->add_salary=obj.add_salary;
			this->sub_salary=obj.sub_salary;
		}
		void pay()
		{
			int absent_day;
			cin>>absent_day;
			this->salary=this->base_salary+this->add_salary;
		}
}; 
class technician: virtual public employee
{
	protected:
		float salary_per_hour;
		float work_time;
		float work_efficial;
	public:
		technician(string name,string id,string salary_class,float salary,float base_salary,float add_salary,float sub_salary,float salary_per_hour,float work_time,float work_efficial):employee(name,id,salary_class,salary,base_salary,add_salary,sub_salary)
		{
			this->salary_per_hour=salary_per_hour;
			this->work_efficial=work_efficial;
			this->work_time=work_time;
		}
		void pay()
		{
			this->add_salary=this->work_efficial*this->work_time*this->salary_per_hour;
			this->salary=this->base_salary+this->add_salary;
		}
};
class salesman: virtual public employee
{
	protected:
		float sale_ammt;
		float sale_efficial;
	public:
		salesman(string name,string id,string salary_class,float salary,float base_salary,float add_salary,float sub_salary,float sale_ammt,float sale_efficial):employee(name,id,salary_class,salary,base_salary,add_salary,sub_salary)
		{
			this->sale_ammt=sale_ammt;
			this->sale_efficial=sale_efficial;
		}
		void pay()
		{
			this->add_salary=this->sale_ammt*this->sale_efficial;
			this->salary=this->base_salary+this->add_salary;
		}
};
class manager:virtual public employee
{
	protected:
		float bonus;
		float efficial;
	public:
		manager(string name,string id,string salary_class,float salary,float base_salary,float add_salary,float sub_salary,float bonus,float efficial):employee(name,id,salary_class,salary,base_salary,add_salary,sub_salary)
		{
			this->bonus=bonus;
			this->efficial=efficial;
		}
		void pay()
		{
			this->add_salary=this->bonus*this->efficial;
			this->salary=this->base_salary+this->add_salary;
		}
};
class develop_manager:virtual public technician,virtual public manager
{
	public:
		develop_manager(string name,string id,string salary_class,float salary,float base_salary,float add_salary,float sub_salary,float salary_per_hour,float work_time,float work_efficial,float bonus,float efficial):technician(name,id,salary_class,salary,base_salary,add_salary,sub_salary,salary_per_hour,work_time,work_efficial),manager(name,id,salary_class,salary,base_salary,add_salary,sub_salary,bonus,efficial),employee(name,id,salary_class,salary,base_salary,add_salary,sub_salary)
		{
		}
		void pay()
		{
			this->add_salary=(this->work_efficial*this->work_time*this->salary_per_hour+this->bonus*this->efficial)/2;
			this->salary=this->base_salary+this->add_salary;
		}
		
};
class sales_manager:virtual public manager,virtual public salesman
{
	public:
		sales_manager(string name,string id,string salary_class,float salary,float base_salary,float add_salary,float sub_salary,float bonus,float efficial,float sale_ammt,float sale_efficial):manager(name,id,salary_class,salary,base_salary,add_salary,sub_salary,bonus,efficial),salesman(name,id,salary_class,salary,base_salary,add_salary,sub_salary,sale_ammt,sale_efficial),employee(name,id,salary_class,salary,base_salary,add_salary,sub_salary)
		{
		}
		void pay()
		{
			this->add_salary=(this->bonus*this->efficial)/2+this->sale_ammt*this->sale_efficial;
			this->salary=this->base_salary+this->add_salary;
		}	
};
int main()
{
	//主函数显示sales_manager类的运行效果
	develop_manager Tom("Tom","123123","1d",1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0,1.0);
	Tom.pay();
	Tom.display();
	return 0;
}


//单位转换程序，输入值和原单位，新单位，返回新单位下的值。
//重量单位：Kg, g, lb, gr,......
//压力单位：Pa, MPa, psi,......
//长度单位：m, km, ft, in,......
//其它单位：md, cp,......
//还有很多单位转换，有些单位是其它单位组合出来的
//here's the solution
#include <iostream>
#include <string>
using namespace std;
class trans
{
	protected:
		float value;
		string previous_unit;
		string present_unit;
	public:
		trans(int num,string previous_unit,string present_unit)
		{
			this->value=num;
			this->previous_unit=previous_unit;
			this->present_unit=present_unit;
		}
 };
 class  weight:virtual public trans
 {
 	public:
 		weight(int num,string previous_unit,string present_unit):trans(num,previous_unit,present_unit)
 		{
		}
		void kgTog()
		{
			cout<<this->value*1000<<endl;
		}
		void gTokg()
		{
			cout<<this->value/1000<<endl;
		}
		void lbTokg()
		{
			cout<<this->value*0.4536<<endl;
		}
		void kgTolb()
		{
			cout<<this->value/0.4536<<endl;
		}
		void gTolb()
		{
			cout<<this->value/453.6<<endl;
		}
		void lbTog()
		{
			cout<<this->value*453.6<<endl;
		}
 };
  class  presure:virtual public trans
 {
 	public:
 		presure(int num,string previous_unit,string present_unit):trans(num,previous_unit,present_unit)
 		{
		}
		void mpaTopa()
		{
			cout<<this->value*1000000<<endl;
		}
		void paTompa()
		{
			cout<<this->value/1000000<<endl;
		}
		void psiTopa()
		{
			cout<<this->value*6894.757<<endl;
		}
		void paTopsi()
		{
			cout<<this->value/6894.757<<endl;
		}
		void mpaTopsi()
		{
			cout<<this->value/0.006894757<<endl;
		}
		void psiTompa()
		{
			cout<<this->value*0.006894757<<endl;
		}
 };
   class  length:virtual public trans
 {
 	public:
 		length(int num,string previous_unit,string present_unit):trans(num,previous_unit,present_unit)
 		{
		}
		void kmTom()
		{
			cout<<this->value*1000<<endl;
		}
		void mTokm()
		{
			cout<<this->value/1000<<endl;
		}
		void inTom()
		{
			cout<<this->value*0.0254<<endl;
		}
		void mToin()
		{
			cout<<this->value/0.0254<<endl;
		}
		void kmToin()
		{
			cout<<this->value*0.0000254<<endl;
		}
		void inTokm()
		{
			cout<<this->value/0.0000254<<endl;
		}
 };
 int main()
 {
 	cout<<"please input the value that you want to convert and it's previous unit and present unit."<<endl;
 	int index,unit_type,func_type;
 	float num;
 	string str1,str2;
 	cin>>num>>str1>>str2;
 	cout<<"the result is:"<<endl;
 	string str[9]={"g","kg","lb","m","km","in","mpa","pa","psi"};
 	for(index=0;index<9;index++)
 	{
 		if(str1==str[index])
 		{
 			unit_type=index;
 			break;
		 }
	}
	switch (unit_type)
	{
		case 0:case 1:case 2:
			for(index=0;index<3;index++)
			{
				if(str[index]==str2)
				{
					func_type=index;
				}
			}
			break;
		case 3:case 4:case 5:
			for(index=3;index<6;index++)
			{
				if(str[index]==str2)
				{
					func_type=index;
				}
			}
			break;
		case 6:case 7:case 8:
			for(index=6;index<9;index++)
			{
				if(str[index]==str2)
				{
					func_type=index;
				}
			}
			break;	
	}
	//solutions
	if(unit_type==0)
	{
		weight solution(num,str1,str2);
		if(func_type==1)
		{
			solution.gTokg();
		}
		else if(func_type==2)
		{
			solution.gTolb();
		}
	}
	else if(unit_type==1)
	{
		weight solution(num,str1,str2);
		if(func_type==0)
		{
			solution.kgTog();
		}
		else if(func_type==2)
		{
			solution.kgTolb();
		}
	}
	else if(unit_type==2)
	{
		weight solution(num,str1,str2);
		if(func_type==0)
		{
			solution.lbTog();
		}
		else if(func_type==1)
		{
			solution.lbTokg();
		}
	}
	else if(unit_type==3)
	{
		length solution(num,str1,str2);
		if(func_type==4)
		{
			solution.mTokm();
		}
		else if(func_type==5)
		{
			solution.mToin();
		}
	}
	else if(unit_type==4)
	{
		length solution(num,str1,str2);
		if(func_type==3)
		{
			solution.kmTom();
		}
		else if(func_type==5)
		{
			solution.kmToin();
		}
	}
	else if(unit_type==5)
	{
		length solution(num,str1,str2);
		if(func_type==3)
		{
			solution.inTom();
		}
		else if(func_type==4)
		{
			solution.inTokm();
		}
	}
	else if(unit_type==6)
	{
		presure solution(num,str1,str2);
		if(func_type==7)
		{
			solution.mpaTopa();
		}
		else if(func_type==8)
		{
			solution.mpaTopsi();
		}
	}
	else if(unit_type==7)
	{
		presure solution(num,str1,str2);
		if(func_type==6)
		{
			solution.paTompa();
		}
		else if(func_type==8)
		{
			solution.paTopsi();
		}
	}
	else if(unit_type==8)
	{
		presure solution(num,str1,str2);
		if(func_type==6)
		{
			solution.psiTompa();
		}
		else if(func_type==7)
		{
			solution.psiTopa();
		}
	}
 	return 0;
 }

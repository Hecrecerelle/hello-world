#include <stdio.h>
struct Date 
{
  int year;
  int month;
  int day;
};
void next_day(struct Date day);
void previous_day(struct Date day);
int equal(struct Date one, struct Date day);
int judge_run(struct Date day);
void show(struct Date day)
 {
  printf("%d:%d:%d\n",day.year,day.month,day.day);
}
int main() 
{
  struct Date today = {2018,3,20};
  struct Date day = {2018,3,20};
  show(day);
  int i;
  for(i=0;i<30;i++)
    next_day(day);
  show(day);
  for(i=0;i<30;i++)
    previous_day(day);
  show(day);
  if(equal(today, day))
    printf("Very Good!\n");
  else
    printf("Very Bad!\n");
  return 0;
}
//function decarlation

int judge_run(struct Date day)
{
	if(day.year%100)//不是整百年
	{
		if(day.year%4)//不是闰年
		{
			return 1;//平年返回真 
		} 
		 else
		{
		 	return 0;//闰年返回假 
		}
	}
	else//正百年 
	{
		if(day.year%400)//不是闰年 
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

void next_day(struct Date day)
{
	++day.day;
	if((day.month==2) && judge_run(day))//2月28天 
	{
		if(day.day>28)
		{
			day.month++;
			day.day=1;
		}
	}
	else if((day.month==2) && !judge_run(day))//2月29天 
	{
		if(day.day>29)
		{
			day.month++;
			day.day=1;
		}
	}
	else if((day.month==1) ||(day.month==3) ||(day.month==5) ||(day.month==7) ||(day.month==8) ||(day.month==10) ||(day.month==12) )//大月
	{
		if(day.day>31)
		{
			day.month++;
			day.day=1;
		}
	}
	else//小月
	{
		if(day.day>31)
		{
			day.month++;
			day.day=1;
		}
	}
	if(day.month>12)
	{
		day.year++;
		day.month=1;
	}
}

void previous_day(struct Date day)
{
	--day.day;
	if((day.month==3) && judge_run(day))//2月28天 
	{
		if(!day.day)
		{
			day.day=28;
			day.month--;
		}
	}
	else if((day.month==3) && !judge_run(day))//2月29天 
	{
		if(!day.day)
		{
			day.day=29;
			day.month--;
		}
	}
	else if((day.month==1) ||(day.month==3) ||(day.month==5) ||(day.month==7) ||(day.month==8) ||(day.month==10) ||(day.month==12) )//大月
	{
		if(!day.day)
		{
			day.day=30;
			day.month--;
		}
	}
	else
	{
		if(!day.day)
		{
			day.day=31;
			day.month--;
		}
	}
	if(!day.month)
	{
		day.year--;
	}
}

int equal(struct Date one, struct Date day)
{
	return ((one.year=day.year) && (one.month=day.month) && (one.year=day.month));
}


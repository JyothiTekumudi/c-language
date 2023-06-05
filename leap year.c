#include<stdio.h>
void main()
{
	int n;
	printf("enter the year");
	scanf("%d",&n);
	if(n%4==0||n%400==0&&n%100!=0)
	{
		printf("it is a leap year");
	}
	else
	{
		printf("not a leap  year");
	}
}

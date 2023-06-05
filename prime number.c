#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("enter the number");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(n%i==0)
		  count++;
	    i++;
	}
	if(count==2)
		printf("it is a prime number");
	else
		printf("not a prime number");
}

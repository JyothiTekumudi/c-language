//reverse of a number
#include<stdio.h>
int main()
{
	int n,r;
	printf("enter any number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		printf("%d",r);
	}
	return 1;
}

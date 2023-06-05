#include<stdio.h>
void main()
{
	int n,i,sum=0;
	printf("enter the number");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
}


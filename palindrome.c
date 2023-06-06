//reverse of a number
#include<stdio.h>
int main()
{
	int n,rem,rev,temp;
	printf("enter any number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(temp==rev)
	printf("palindrome");
	else
	printf("not a palindrome");
	return 1;
}

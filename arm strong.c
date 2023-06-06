#include<stdio.h>
void main()
{
  int n,r,temp,sum=0;
  printf("enter any number");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
  	r=n%10;
  	sum=sum+r*r*r;
  	n=n/10;
  }
  printf("%d",sum);
  if(temp==sum)
  printf("\nit is a armstrong");
  else
  printf("\nnot a armstrong");
}

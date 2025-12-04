#include<stdio.h>
int fac(int n)
{
	if(n<=1)
	{
		return 1;
	}
		return n*fac(n-1);
}
int main()
{
	int n;
	printf("enter a number :");
	scanf("%d",&n);
	printf("factorial of %d is:%d",n,fac(n));
	return 0;
}

#include<stdio.h>
int main()
{
	int num,factor,i;
	printf("enter number");
	scanf("%d",&num);
	printf("enter i");
	for(i=1;i<=num;i++)
	{
	 if(num%i==0)
	{
		factor=factor+1;
	}
	}
	if(factor==2)
	{
		printf("prime");
	}
	else
	{
		printf("not  a prime");
	}
	return 0;
}


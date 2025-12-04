#include<stdio.h>
int sum(int n)
{
	int r,sum=0;
	
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	return sum;
}
int main()
{
	int n;
	printf("enter n value :");
	scanf("%d",&n);
	printf("sum of given numbers:%d",sum(n));
}


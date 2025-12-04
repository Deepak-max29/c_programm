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
int digit(int m)
{
	int r,s=0;
	
	while(m>0)
	{
		r=m%10;
		s=s+r;
		m=m/10;
	}
	return s;
	
}
int main()
{
	int n,m;
	printf("enter n values :\n");
	scanf("%d",&n);
	printf("enter m values :\n");
	scanf("%d",&m);
	printf("sum of given numbers:%d",sum(n)+digit(m));
}


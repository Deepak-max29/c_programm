//with return and without parameter//
#include<stdio.h>
int add()
{
	int a=5,b=8;
	return a+b;
}

int main()
{
	int sum=0;
	sum=add();
	printf(" sum is :%d",sum);
}

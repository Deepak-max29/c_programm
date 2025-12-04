//write a c program for static-key word//
#include<stdio.h>
int display()
{
	static int a =10;
	a++;
	return a;
}
int main()
{
	printf("value of a : %d\n",display());
	printf("value of a : %d\n",display());
	printf("value of a : %d\n",display());
	return 0;
}

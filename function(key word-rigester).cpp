//write a c program for register-keyword//
#include<stdio.h>
void display()
{
	register int a=10;
	printf("%d",a);
}
int main()
{
	display();
	return 0;
}

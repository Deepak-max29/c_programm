#include<stdio.h>
int main(){
	int a,b;
	printf("enter a value :");
	scanf("%d",&a);
	printf("enter b value :");
	scanf("%d",&b);
	printf("the value of a,b is (%d,%d)\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the value of a,b after swap is (%d,%d)",a,b);
	return 0;
}

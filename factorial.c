#include<stdio.h>
int main(){
	int a;
	printf("enter a number to find its factorial:");
	scanf("%d",&a);
	int i;
	int factor=1;
	for(i=1;i<=a;i++){
		factor=factor*i;
		  
	}
	printf("the factorial is:%d",factor);
	return 0;
}

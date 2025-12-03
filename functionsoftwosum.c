#include<stdio.h>
int name(int a,int b)
{
	return a+b;
}
int sub(int a,int b){
	if(a>=b){
		return a-b;
	}else{
		return b-a;
	}
	
}
int main(){
	int a,b,sum1,sum2;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	sum1=name(a,b);
	sum2=sub(a,b);
	printf("the sum of the two numbers is:%d",sum1);
	printf("\nthe difference between largest number and the smallest number that given from the user is:%d",sum2);

} 


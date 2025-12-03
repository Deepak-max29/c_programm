#include<stdio.h>
int main()
{
	int a;
	printf("enter a number so it will stop at it:");
	scanf("%d",&a);
	int y;
	int sum=0;
	int sum1=0;
	for(y=0;y<=a;y++){
		if(y%2==0){
			printf("%d\n",y);
			sum=sum+y;
	}
	    else if(y%2!=0){
	    	printf("%d\n",y);
	    	sum1=sum1+y;
	}
	}
	printf("the sum of the first enterred even number from user:%d",sum);
	printf("\nthe sum of the first odd number from the user:%d",sum1);
	printf("\nthe sum of the first %d natural numbers are:%d",a,sum+sum1);
	return 0;
}

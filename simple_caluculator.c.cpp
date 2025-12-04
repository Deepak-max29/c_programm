#include<stdio.h>
int main(){
	int c;
	float a,b;
	printf("enter a value : ");
	scanf("%f",&a);
	printf("enter b value : ");
	scanf("%f",&b);
	printf("enter 1 if you want to add both numbers \n enter 2 if you want to subract both numbers \n enter 3 if you want to multiple both numbers \nenter 4 if you want to divide both numbers \n");
	scanf("%d",&c);
	if (c==1){
		printf("the sum of %.2f and %.2f is %.2f",a,b,a+b);
	}
    else if(c==2){
    	printf("the subraction of %.2f from %.2f is %.2f",b,a,a-b);
	}
	else if(c==3){
		printf("the product of %.2f and %.2f is %.2f",a,b,a*b);
	}
	else if(c==4){
		printf("the quotient when %.2f is divided by %.2f is %.2f",a,b,a/b);
	}
	else{
		printf("i asked 1to4 only dont know you know english ");
	}
	return 10;
}

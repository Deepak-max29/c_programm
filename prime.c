#include<stdio.h>
int main(){
	int num,count;
	count=0;
	printf("ENTER A VALUE:");
	scanf("%d",&num);
	int i=0;
	while(i<=num){
		if(num%i==0){
			printf("%d/n",i);
			count=count+1;
			i++;
		
		}
		else if(num%i!=0){
			continue;
		}
	}
	
/*	int i;
    for(i=0;i<=num;i++);
	if(num%i==0){
		printf("%d",i);
		count=count+1;
if(count==2){
	printf("it is a prime number");
			
}else{
	printf("it is not a prime number");
		}
		
	}*/
	return 0;
	
}

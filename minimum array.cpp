#include<stdio.h>
 int main(){
 	int n;
 	scanf("%d",&n);
 	int value[n];
 	for(int i=0;i<n;i++){
 		scanf("%d",&value[i]);
 		
	}
	int number=value[0];
	for(int p=0;p<n;p++){
		if(value[p]>number){
			continue;
		}else{
			number=value[p];
		}
	 	
	 }
	 printf(" the least number:%d",number);
	 return 0;
 }

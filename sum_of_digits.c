#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,r=0,sum=0;
    scanf("%d", &a);
    a=abs(a);
    while(a != 0){
        r=a%10;
        sum+=r;
        a/=10;
    }
    printf("%d",sum);
}
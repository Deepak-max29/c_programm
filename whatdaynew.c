#include<stdio.h>
int main(){
    int a,b,x;
    const char *days[] = {"monday","tuesday","wednesday","thrusday","friday","saturday","sunday"};
    printf("\n       **what day**       ");
    printf("\n Enter 0 if today is monday");
    printf("\n Enter 1 if today is tuesday");
    printf("\n Enter 2 if today is wednesday");
    printf("\n Enter 3 if today is thrusday");
    printf("\n Enter 4 if today is friday");
    printf("\n Enter 5 if today is saturday");
    printf("\n Enter 6 if today is sunday");
    printf("\n Enter here : ");
    scanf("%d",&a);
    if (a>=0 && a<=6){
        printf("enter after how many days day you want : ");
        scanf("%d",&b);
        x=(a+b) % 7;
        printf("if today is %s after %d number of days the day is %s",days[a],b,days[x]);
        return 0;
    }
    else {
        printf("the range 0-6 only");
    }
    
    return 0;
}
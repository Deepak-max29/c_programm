#include<stdio.h>
int main(){
    int a,b;
    const char *months[] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"};
int days_in_month[] = {
    31,
    28, 
    31, 
    30, 
    31, 
    30,
    31,
    31, 
    30, 
    31, 
    30, 
    31  
};

    printf("enter the month number (1-12) : ");
    scanf("%d",&a);
    if (a>=1 && a<=12){
        if(a == 2){
            printf("enter year : ");
            scanf("%d",&b);
            if ( b%400 == 0 || (b%4==0 && b%100 != 0)){
                printf("the month is february \nit has 29 days");
            }
             else{
                printf("the month is february \nit has 28 days");
            }
        }
         else{
            printf("the month is %s\n",months[a-1]);
            printf("it has %d days\n",days_in_month[a-1]);
         }
    }
     else{
        printf("there are only (1-12) months bro go and study");
    }
return 0;
}
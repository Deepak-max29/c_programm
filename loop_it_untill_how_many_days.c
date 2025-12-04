#include<stdio.h>
int main(){
    int a=0,b;
    const char *months[] = {
    "January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"};
int days_in_month[] = {
    31, // January
    28, // February
    31, // March
    30, // April
    31, // May
    30, // June
    31, // July
    31, // August
    30, // September
    31, // October
    30, // November
    31  // December
};
while(a<1 || a>12){
    printf("enter the month number (1-12) : ");
    scanf("%d",&a);
    if(a>=1 && a<=12){
        if(a == 2){
            printf("enter year : ");
            scanf("%d",&b);
            if ( b%400 == 0 || (b%4==0 && b%100 != 0)){
                printf("the month is february \nit has 29 days");
                break;
            }
             else{
                printf("the month is february \nit has 28 days");
                break;
            }
        }
         else{
            printf("the month is %s\n",months[a-1]);
            printf("it has %d days\n",days_in_month[a-1]);
            break;
         }
    }
    else{
        printf("there are only (1-12) months bro go and study and come back and type correct number of month \n");
    }
}
return 0;
}
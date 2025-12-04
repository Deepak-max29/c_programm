#include<stdio.h>
int main(){
    int n;
    printf("enter no. of students : ");
    scanf("%d",&n);
    char student_name[n][40];
    int student_markhs[n];
    for (int i=0;i<n;i++){
        printf("enter the name of the %d student : ",i+1);
        scanf("%s",&student_name[i]);
        printf("enter the makhs of the %d student : ",i+1);
        scanf("%d",&student_markhs[i]);
    }
    for (int i=0;i<n;i++){
        printf("The markhs of %s are %d\n",student_name[i],student_markhs[i]);
    }
}
#include<stdio.h>
int main (){
    char grade[1];
    char name[50];
    char sen[200];
    printf("Enter grade : ");
    scanf("%s",grade);
    printf("Enter name : ");
    scanf("%s",name);
    printf("Enter sentence : ");
    scanf(" %[^\n]s",sen);
    printf("%s\n%s\n%s",grade,name,sen);
}
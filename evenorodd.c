#include <stdio.h> 
int isEven(int n) { 
return n % 2 == 0; 
} 
int main() { 
int num; 
printf("Enter a number: "); 
scanf("%d", &num); 
if(isEven(num)) 
printf("Even Number\n"); 
else 
printf("Odd Number\n"); 
return 0; 
}

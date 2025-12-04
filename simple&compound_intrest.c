#include <stdio.h> 
#include <math.h> 
int main() { 
f
 loat principal, rate, time; 
printf("Enter principal amount: "); 
scanf("%f", &principal); 
printf("Enter rate of interest (in %%): "); 
scanf("%f", &rate); 
printf("Enter time (years): "); 
scanf("%f", &time); 
f
 loat SI = (principal * rate * time) / 100; 
f
 loat CI = principal * pow((1 + rate / 100), time) - principal; 
printf("Simple Interest = %.2f\n", SI); 
printf("Compound Interest = %.2f\n", CI); 
return 0; 
}

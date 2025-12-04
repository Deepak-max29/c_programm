#include <stdio.h> 
int main() { 
f
 loat u, a, t, d; 
printf("Enter initial velocity (u): "); 
scanf("%f", &u); 
printf("Enter acceleration (a): "); 
scanf("%f", &a); 
printf("Enter time (t): "); 
scanf("%f", &t); 
d = u * t + 0.5 * a * t * t; 
printf("Distance travelled = %.2f\n", d); 
return 0; 
}

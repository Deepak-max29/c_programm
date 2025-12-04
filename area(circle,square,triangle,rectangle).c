#include <stdio.h> 
#define PI 3.14159 
int main() { 
f
 loat radius, side, length, breadth, base, height; 
printf("Enter radius of circle: "); 
scanf("%f", &radius); 
printf("Area of circle = %.2f\n", PI * radius * radius); 
printf("Enter side of square: "); 
scanf("%f", &side); 
printf("Area of square = %.2f\n", side * side); 
printf("Enter length and breadth of rectangle: "); 
scanf("%f %f", &length, &breadth); 
printf("Area of rectangle = %.2f\n", length * breadth); 
printf("Enter base and height of triangle: "); 
scanf("%f %f", &base, &height); 
printf("Area of triangle = %.2f\n", 0.5 * base * height); 
return 0; 
}

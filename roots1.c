#include <stdio.h>
int main() {
    double A, B, C, dis;
    printf("If the quadratic equation is A(X^2) + BX + C = 0\n");
    printf("Enter A value: ");
    scanf("%lf", &A);
    printf("Enter B value: ");
    scanf("%lf", &B);
    printf("Enter C value: ");
    scanf("%lf", &C);
    dis = (B * B) - (4 * A * C);
    printf("the dis = %lf",dis);
    if (dis > 0) {
        float root1 = (-B + sqrt(dis)) / (2 * A);
        float root2 = (-B - sqrt(dis)) / (2 * A);
        printf("Roots are real and different.\n");
        printf("Root1 = %.2lf and Root2 = %.2lf\n", root1, root2);
    } 
    else if (dis == 0) {
        float root = -B / (2 * A);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2lf\n", root);
    }
    else {
        float realPart = -B / (2 * A);
        float imagPart = sqrt(-dis) / (2 * A);
        printf("Roots are imaginary.\n");
        printf("Root1 = %.2lf + %.2lfi\n", realPart, imagPart);
        printf("Root2 = %.2lf - %.2fi\n", realPart, imagPart);
    }
    return 0;
}
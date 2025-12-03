#include<stdio.h>
int main(){
	float a,b;
	char op;
	printf("enter the value of a & b:\n");
	scanf("%f %f",&a,&b);
	getchar();
	printf("enter the operator(+,-,*,/):");
	scanf("%c",&op);
	switch(op){
		case'+':
			printf("the sum of the two digit %f+%f=%f",a,b,a+b);
			break;
	    case'-':
		    printf("the sub of the two digit %f-%f=%f",a,b,a-b);
		    break;
        case'*':
	        printf("the mul of the two digits %f*%f=%f",a,b,a*b);
	        return 0;
	    case'/':
		    printf("the division of the two digits %f/%f=%f",a,b,a/b);
    }
}

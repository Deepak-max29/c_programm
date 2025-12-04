#include <stdio.h> 
int main() { 
int n, trace=0; 
printf("Enter size of square matrix: "); 
scanf("%d",&n); 
int A[n][n]; 
printf("Enter elements of matrix:\n"); 
for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&A[i][j]); 
for(int i=0;i<n;i++) trace+=A[i][i]; 
printf("Trace of matrix = %d\n", trace); 
return 0; 
}

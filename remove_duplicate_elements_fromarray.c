#include <stdio.h> 
int main() { 
int n, k; 
printf("Enter number of elements: "); 
scanf("%d",&n); 
int arr[n], temp[n]; 
printf("Enter elements: "); 
for(int i=0;i<n;i++) scanf("%d",&arr[i]); 
int j=0; 
for(int i=0;i<n;i++){ 
int flag=0; 
for(int k=0;k<j;k++){ 
if(arr[i]==temp[k]){ 
f
 lag=1; break; 
} 
} 
if(flag==0) temp[j++]=arr[i]; 
} 
printf("Array after removing duplicates: "); 
for(int i=0;i<j;i++) printf("%d ",temp[i]); 
printf("\n"); 
return 0; 
}

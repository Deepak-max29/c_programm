#include <stdio.h> 
#include <string.h> 
int main() { 
char str[100]; 
int freq[10]={0}; 
printf("Enter a string: "); 
fgets(str,sizeof(str),stdin); 
for(int i=0;i<strlen(str);i++){ 
if(str[i]>='0' && str[i]<='9') freq[str[i]-'0']++; 
} 
for(int i=0;i<10;i++){ 
if(freq[i]>0) printf("Digit %d occurs %d times\n", i, freq[i]); 
} 
return 0; 
} 

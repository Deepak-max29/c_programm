#include<stdio.h>
int main(){
    int n;
    printf("enter the no of elements : ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("enter the %d element ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("arr is sorted\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int  key,low=0,high=n-1,mid;
    printf("\nenter the element you want to find : ");
    scanf("%d",&key);
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            printf("Element found at index %d",mid);
            return 0;
        }
        else if(arr[mid]<key){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    printf("Element not found");
}
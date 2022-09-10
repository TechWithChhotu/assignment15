// Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
int shoRt(int arr[],int size);
int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);

    int arr[size],j,i,temp,R[size];
    printf("Enter array elements: ");
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);

    shoRt(arr,size);

    printf("after sorting Array: ");
    for(i=0; i<size; i++)
        printf(" %d",arr[i]);
        
    return 0;
}
int shoRt(int arr[],int size) {

    int i,temp,j;
    for(i=0; i<size; i++) {
        for(j=i+1; j<size; j++) {
            if(arr[j]<arr[i]) {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    
    return arr;
}

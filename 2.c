//Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int smallest(int arr[],int );
int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);

    int arr[10],sm,i;
    printf("Enter array elements: ");
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);

    sm=smallest(arr,size);

    printf("smallest = %d",sm);
    return 0;
}
int smallest(int arr[],int Size) {
    int sm,i;
    sm=arr[0];
    for(i=0; i<Size; i++) {
        if(sm>arr[i])
            sm=arr[i];
    }
    return sm;
}

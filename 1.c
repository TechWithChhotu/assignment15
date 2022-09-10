// Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int grater(int arr[],int );
int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);

    int arr[10],g,i;
    printf("Enter array elements: ");
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);

    g=grater(arr,size);

    printf("grater=%d",g);
    return 0;
}
int grater(int arr[],int Size) {
    int g,i;
    g=arr[0];
    for(i=0; i<Size; i++) {
        if(g<arr[i])
            g=arr[i];
    }
    return g;
}

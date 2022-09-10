/* Write a function to rotate an array by n position in d direction. The d is an indicative 
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )*/
#include<stdio.h>
int LeftToRight(int arr[],int size,int );
int RightToLeft(int arr[],int size,int );
int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);

    int arr[size],i,j,NoR;
    printf("Enter array elements: ");
    for(i=0; i<size; i++)
        scanf("%d",&arr[i]);

    printf("Enter number of rotation: ");
    scanf("%d",&NoR);

    char ch;
    printf("Enter rotation(Right to left press R OR Left to Right press L): ");

    scanf("\n%c",&ch);

    if(ch=='L'||ch=='l')
        LeftToRight(arr,size,NoR);
    else
        RightToLeft(arr,size,NoR);

    printf("after rotation: ");
    for(i=0; i<size; i++)
        printf(" %d",arr[i]);

    return 0;
}
int LeftToRight(int arr[],int size,int NoR) {

    int temp,i,j;

    for(i=0; i<NoR; i++) {
        temp=arr[0];
        for(j=0; j<size; j++) {
            arr[j]=arr[j+1];
        }
        arr[size-1]=temp;
    }

    return arr;
}
int RightToLeft(int arr[],int size,int NoR) {

    int temp,i,j;

    for(i=0; i<NoR; i++) {
        temp=arr[size-1];
        for(j=size-1; j>=0; j--) {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;
    }

    return arr;
}

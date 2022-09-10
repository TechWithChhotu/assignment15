/*Write a function in C to read n number of values in an array and display it in reverse 
order*/
#include<stdio.h>
int reverse(int arr[],int size);
int main()
{
	int size;
	printf("Enter array size: ");
	scanf("%d",&size);
	
	int arr[size],i;
	printf("Enter array value: ");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	
	reverse(arr,size);
	
return 0;
}
int reverse(int arr[],int size){
	while(size>=0){
		printf(" %d",arr[size]);
		size--;
	}
}

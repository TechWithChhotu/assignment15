//Write a function in C to merge two arrays of the same size sorted in descending order.
#include<stdio.h>
int marge(int first_arr[],int second_arr[],int );
int main()
{
	int size;
	printf("Enter array size: ");
	scanf("%d",&size);
	 
	 int first_arr[100],second_arr[50],i;
	 printf("Enter first array elements: ");
	 for(i=0;i<size;i++)
	 scanf("%d",&first_arr[i]);
	 
	 printf("Enter second array elements: ");
	 for(i=0;i<size;i++)
	 scanf("%d",&second_arr[i]);
	 
	marge(first_arr, second_arr,size);
	
return 0;
}
int marge(int first_arr[],int second_arr[],int size){
	
	int i,j,temp;
	
	for(i=size,j=0;i<size+size;i++,j++)
	first_arr[i]=second_arr[j];
	size+=size;
	
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(first_arr[j]<first_arr[i]){
			temp=first_arr[j];	
			first_arr[j]=first_arr[i];
			first_arr[i]=temp;
			}
		}
	}
	printf("after shorting & marging array: ");
	for(i=0;i<size;i++)
	printf(" %d",first_arr[i]);
}

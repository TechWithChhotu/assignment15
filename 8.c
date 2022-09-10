//Write a function in C to print all unique elements in an array.
#include<stdio.h>
int unique(int arr[],int size);
int main()
{
	int size;
	printf("Enter array size: ");
	scanf("%d",&size);
	
	int arr[size],i;
	printf("Enter array value: ");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	unique(arr,size);
return 0;
}
int unique(int arr[],int size){
	int i,j,k;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				for(k=i;k<size;k++)
					arr[k]=arr[k+1];
			 	size--;
			 	i--;
			}
		}
	}
	printf("array: ");
	for(i=0;i<size;i++)
	printf(" %d",arr[i]);
}

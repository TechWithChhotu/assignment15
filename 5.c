/*Write a function to find the first occurrence of adjacent duplicate values in the array. 
Function has to return the value of the element.*/

#include<stdio.h>
int occurrence(int arr[],int size );
int main()
{	
	int size;
	printf("Enter array size: ");
	scanf("%d",&size);
	
	int arr[size],i,search;
	printf("Enter array values: ");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	
	occurrence(arr,size);

return 0;
}
int occurrence(int arr[],int size ){
	int dub,i;
	printf("Enter dublicate value: ");
	scanf("%d",&dub);
	
	for(i=0;i<size;i++){
		if(arr[i]==dub){
			printf("this value exist in array index number %d",i);
			break;
		}
	}
}

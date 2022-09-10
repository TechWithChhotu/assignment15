//. Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int dub(int arr[],int size);
int main()
{
	int size;
	printf("Enter array size: ");
	scanf("%d",&size);
	
	int arr[size],i;
	printf("Enter array value: ");
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
dub(arr,size);
return 0;
}
int dub(int arr[],int size){
	int i,j,k,count=0;
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				for(k=i;k<size;k++)
					arr[k]=arr[k+1];
				count++;
			 	size--;
			 	i--;
			}
		}
	}

	printf("total number of dublicate values = %d",count);
}

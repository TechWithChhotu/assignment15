#include<stdio.h>
void frequency(int a[], int size);
int main()
{
    int a[30],i,size;
    printf("Enter Array size: ");
    scanf("%d",&size);
    printf("Enter %d array elements: ",size);
    for(i=0; i<size; i++)
        scanf("%d",&a[i]);
    frequency(a,size);

    return 0;
}
void frequency(int a[], int size) {
    int i,j,k,count;
    for(i=0; i<size; i++) {
        count=1;
        for(j=i+1; j<size; j++) {
            if(a[i]==a[j]) {
                for(k=j; k<size; k++) {
                    a[k]=a[k+1];
                }
                size--;
                j--;
                count++;
            }

        }
        printf("frequency of %d is %d times\n",a[i],count);
    }
}

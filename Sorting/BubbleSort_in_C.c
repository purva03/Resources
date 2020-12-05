//Best case:O(n)
//Worst case:O(n^2)
#include<stdio.h>
void main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    for( int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\nSORTED ARRAY:\n");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
}

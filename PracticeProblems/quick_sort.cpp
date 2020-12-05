#include<iostream>
using namespace std;

// function to partition the given array
partitionArray(int arr[],int s,int e)
{
    int pivot = arr[e];
    int pIndex = s;
    for(int i=s;i<e;i++)
    {
        if(arr[i]<pivot)
        {
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex = pIndex+1;
        }
    }
    int temp = arr[pIndex];
    arr[pIndex] = arr[e];
    arr[e] = temp;

    return pIndex;
}

// recursive function for quick sort
quickSort(int A[],int start,int End)
{
    if(start < End)
    {
        int pIndex = partitionArray(A, start, End);
        quickSort(A, start, pIndex-1);
        quickSort(A, pIndex+1, End);
    }
}
int main()
{
    int Array[] = {7,2,1,6,8,5,3,4};

    cout<<"Initial array; \n";
    for(int i=0;i<8;i++)
        cout<<Array[i]<<" ";

    cout<<"\nSorted array: \n";
    quickSort(Array,0,7);

    for(int i=0;i<8;i++)
        cout<<Array[i]<<" ";
}

/*
    Time Complexity: O(n^2) -> Worst Case

    OUTPUT:

    Initial array;
    7 2 1 6 8 5 3 4
    Sorted array:
    1 2 3 4 5 6 7 8
*/

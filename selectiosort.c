#include<stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i])
    }
    printf("\n");
    
}
void selectionSort(int *A, int n)
{
    int indexOfMin;
    printf("Running selection sort...\n");
    for(int i =0;i<n-1;i++)
    {
         
    }
}
int main()
{ 
    // input array
    // 00 01 02 03 04 05 
    // 3   4  5  6  9 11
    // After first pass 
    int A[] = {3, 4, 5, 6, 9, 11};
    int n = sizeof(A)/sizeof(A[0]);
    printArray(A, n);
    seelctionSort(A, n);
    printArray(A, n);


    
    return 0;
}
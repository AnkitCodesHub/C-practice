#include<stdio.h>
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    
}
void selectionSort(int *A, int n)
{
    int indexOfMin, temp;
    printf("Running selection sort...\n");
    for(int i =0;i<n-1;i++)
    {
       indexOfMin = i;
       for(int j = i+1; j < n-1; j++)
       {
            if(A[j] < A[indexOfMin])
            {
                indexOfMin = j;
            }
       }
        // Swap A[i] and A[index of min] 
       temp = A[i];
       A[i] = A[indexOfMin];
       A[indexOfMin] = temp;
    }
}
int main()
{ 
    // input array
    // 00 01 02 03 04 05 
    // 3   4  5  6  9 11
    // After first pass 
   // 00 01 02 03 04  
    // 2  5  3 13 12
   // After second pass 
   // 00 01 02 03 04  
    // 2  3  5 13 12 
    int A[] = {3, 4, 5, 6, 9, 11};
    int n = sizeof(A)/sizeof(A[0]);
    printArray(A, n);
    selectionSort(A, n);
    printArray(A, n);


    
    return 0;
}
// Ankit Raj Date:21,Apr,2026 Insertion Sort
#include<stdio.h>
void insertionSort (int *a, int n)
{
    for (int i =0; i<n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void insertionSort(int *a, int n)
{
   for (int i = 0; i < n ; i++) 
   {

   }
}
int main ()
{
    // 4 5 6 7 8 2 3
    int a[] = {12, 54, 65, 60, 23, 9};
    int n = sizeof(a)/sizeof(a[0]);
    // printArray(a , n);
    insertionSort(a, n);
    return 0;
}
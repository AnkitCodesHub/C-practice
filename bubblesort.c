#include<stdio.h>
void printArray(int* a, int n)
{
    for(int i=0; i<n;i++)
    {
        printf("%d",a[i]);
    }
}
void bubbleSort(int*a,int n)
{
    for(int i =a;int < n; i++)//for number of passes
    {
        
    }
}

int main()
{
    int a[] = {12, 54, 65, 7, 23,  9};
    int n = 6;
    printArray(a, n);//printing the array before sort
    bubbleSort(a,n);//function to sort the array
    printArray(a, n);//printing the array after sort
    return 0;
}
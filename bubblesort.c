#include<stdio.h>
void printArray(int* a, int n)
{
    for(int i=0; i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void bubbleSort(int* a,int n)
{
    int temp;
    for(int i = 0 ; i < n; i++)//for number of passes
    {
        for(int j = 0; j <n-1-i; j++)//for comparison in each pass
        {
            if(a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp; 

            }
        }
    }
}

int main()
{
    int a[] = {12, 54, 65, 7, 23,  9};
    // int a[] = {1,2,3,4,5,6,7,8,9};
    int n = 6;
    printArray(a, n);//printing the array before sort
    bubbleSort(a,n);//function to sort the array
    printArray(a, n);//printing the array after sort
    return 0;
}
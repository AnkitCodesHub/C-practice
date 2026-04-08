// a program in c to perform linear search 
#include<stdio.h>
int linearSearch(int arr[],int size,int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;

}
int main()
{
    int arr [] = {10,12,25,26,76,85};
    int n = sizeof[arr]/sizeof(arr[0]);
    int target = 76;
    int searchIndex =  linearSeach(arr, size, element);
    printf("The element %d is at index %d",element,searchIndex);
    return 0;
    
}
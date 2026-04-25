#include <stdio.h>
int linearSearch(int arr[],int size, int element){
    for(int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }  
    return -1;

}
int binarySearch(int arr[], int size, int element){
    int low,mid,high;
    low = 0;
    high = size - 1;
    // Start searching
    while(low <= high){
    mid = (low + high)/2;
    if (arr[mid] == element)
    {
        return mid;
    }
    if (arr[mid]<element)
    {
        low = mid+1;
    }
    else
    {
        high = mid-1;
    }
}
    return -1;
}
// Searching Ends
int main()
{
    // unsorted array for linear search
    // int arr[] = {1,3,5,6,7,8,9,10,24,4,56,67};
    
    
    // sorted array for binary search
    int arr[] = {1,2,3,4,5,6,7,8,9,10,44,45,46,47};
    int size = sizeof(arr)/sizeof(int);
    int element = 44;
    // int searchIndex = linearSearch(arr,size,element);
    // printf("The element %d is foud at index %d\n",element,searchIndex);
    int searchIndex = binarySearch(arr,size,element);
    printf("The element %d was found at index %d \n",element, searchIndex);
    return 0;
}


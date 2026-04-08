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
int bianrySearch(int arr[], int size, int element){
    int low,mid,high;
    low = 0;
    high = size - 1;
    // Start searching
    while(low <= high){
    mid = (low+high)/2;
    arr([mid] == element);
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
    int size = sizeof(arr)/sizeof(int);
    
    // sorted array for binary search
    int arr[] = {1,2,3,4,5,6,7,8,9,10,44,45,46,47};
    int element = 44;
    int searchIndex = linearSearch(arr,size,element);
    printf("The element %d was found at index %d \n",element, searchIndex);
    return 0;
}


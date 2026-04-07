#include <stdio.h>
int linearSearch(int arr[],int size, int element){
    for(int i = 0; i < size; i++)
    {
        if (arr[i] == element){
            return 1;
        }
    }  
    return -1;

}
int main()
{
    int arr[] = {1,3,5,6,7,8,9,10,24,4,56,67};
    int size = sizeof(arr)/sizeof(int);
    int element = 4;
    int searchIndex = linearSearch(arr,size,4);
    printf("The element %d was found at index %d \n",element, searchIndex);
    return 0;
}


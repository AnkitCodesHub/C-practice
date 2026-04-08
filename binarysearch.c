#include <stdio.h>
int linearSearch(int arr[],int size, iny element)
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

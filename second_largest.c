#include <stdio.h>
int returnSecondMax(int array[],int n)
{
    int max = array[0];
    int second = array[0];
    for (int i =0; i<n;i++)
    {
        if (array[i]>max)
        {
            second = max;//old argest becomes secod 
            max = array[i];//new largrest sets 
        }
        else if(array[i]>second && array[i] != max)
        {
            second = array[i];
        } 
    }
    return second;
}
int main()
{
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int second = returnSecondMax(array,10);
    printf("The second largest element is %d",second);
    return 0;
}
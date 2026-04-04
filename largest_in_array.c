#include<stdio.h>

 int returnMax(int array[], int n){
 int max = 0;//local variable 
 for (int i = 0; i<n; i++)
 {
    if (array[i]>max)
    {
        max = array[i];
    }
 }
 array[0] = 999;
 return max;
 }
 
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,12,13};//agar yha change karege to upar v changed array hi pass hoga with the help of pointer
    int max = returnMax(arr,11);//this is local variable 
    printf("the maximum element in this array is %d",max);
    for(int i = 0; i < 7; i++)
    {
        printf("The element %d is %d\n",i,arr[i]);
    }
    return 0;
}
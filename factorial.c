// A program to find factorial of a number 
#include<stdio.h>
int main()
{
int i=0,n=9,factorial=1;
for(int i = 1; i<=n; i++)
    {
        factorial*=i;  
    }
printf("The factorial of the %d is %d",n,factorial);
return 0;
}



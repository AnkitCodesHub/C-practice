#include<stdio.h>

int main()
{
    int i,n,prime=1;

    printf("Enter the number ");
    scanf("%d",&n);

    if(n<=1)
    {
        printf("The no. is not prime");
    }
    for (i=2; i<n; i++)
    {
        if(i%n==0)
        {
            prime = 0;
            break;
        }
    }
    if(prime==0)
    {
        printf("This is a prime number");
    }
    else
    {
        printf("this is not a prime number");
    }
    return 0;
}
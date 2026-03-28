#include<stdio.h>
int main()
{
    int n, sum=0;

    printf("Enter teh number: \t");
    scanf("%d",&n);

    if(n<0)
    {
        n=-n;
    }
    while(n!=0)
    {
        sum +=n%10;
        n=n/10;
    }
    printf("sum of digits = %d\n",sum);
    return 0;
}
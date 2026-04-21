#include<stdio.h>
int fibo(int num)
int main()
{
    int n;
    printf("Enter the number you want series upto\t");
    scanf("%d",&n);
    printf("The fibonnachi series upto %d terms is %d",n,fibo(n));
    return 0;

}

int fibo(int num)
{
    if (num <= 0)
    {
        return 0;
    }
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return(fibo (num-1)+fibo(num-2));
    }
}
// calculate GCD of two numbers 
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter teh numbers: ");
    scanf("%d %d",&a,&b);
    while(b!=0)
    {
        temp = a%b;
        a=b;
        b=temp;    
    }
    printf("GDC is %d",a);
    return 0;
}
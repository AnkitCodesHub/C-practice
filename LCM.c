// To calculate lcm of two numbers.
#include<stdio.h>
int main()
{
    int a,b,rem;
    printf("Enter the integers: ");
    scanf("%d %d",&a,&b);
    int x=a,y=b;
    while(b!=0)
    {
        rem = a%b;
        a=b;
        b = rem;
    }
    int gcd = a;
    int LCM = (x*y)/gcd;
    printf("The LCM is %d",LCM);
    return 0;
}

#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the numbers: \n");
    scanf("%d",&a);
    printf("b:\t");
    scanf("%d",&b);
    printf("c:\t");;
    scanf("%d",&c);
    printf("d:\t");
    scanf("%d",&d);

    if(a>b&&a>c&&a>d)
    {
        printf("%d is the greatest",a);
    }
    if(b>a&&b>c&&b>d)
    {
        printf("%d is the greatest number",b);
    }
    if(c>a&&c>b&&c>d)
    {
        printf("%d is greatest",c);
    }
    else
    {
        printf("%d is greatest",d);
    }
    return 0;

}
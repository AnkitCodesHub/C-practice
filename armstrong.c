#include<stdio.h>
#include<math.h>
int main()
{
    int n,origional,rem,count=0;
    int sum = 0;
    printf("enter the number: \n");
    scanf("%d",&n);
// step 1
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    n=origional;

// step 2
    while (n != 0)
    {
        sum += pow(rem,count);
        n = n/10;
    }
    if(sum == origional)
    {
        printf("%d is armstrong",origional);
    }
    else
    {
        printf("%d is not armstrong",origional);
    }
    return 0;
}
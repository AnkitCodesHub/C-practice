#include<stdio.h>
int main()
{
    int i, n, origional,reversed=0,rem;
    printf("enter the number: \n");
    scanf("%d",&n);
    origional = n;
     while(n!=0)
    { 
     rem = n % 10; //to get the last digit
     reversed = reversed*10 + rem; // arrange the number in reverse
     n = n/10;
     printf("the number reversed is %d\n",reversed);
    };
     if (origional==reversed)
     {
        printf("%d is paindrome",origional);
     }
     else
     {
        printf("%d is not palindrome",origional);
     }

     return 0;
}
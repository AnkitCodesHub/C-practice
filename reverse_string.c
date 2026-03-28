// reverse a string
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[100];
    int i, length;
    // take the input 
    printf("Enter the string: ");
    // scanf("") ye line yha pe nahi likhna h 
    fgets(str,sizeof(str),stdin);
    length = 0;
    // increase the coounter untill the sentence ends 
    while (str[length] != 0)
    {
        length++;
    }
    // removes teh newline character while couting 
    if (str[length-1] == '\n')
    {
        length --;
    }
    // revrses the loop
    for(i= length-1 ; i >= 0 ; i--)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    return 0;
}
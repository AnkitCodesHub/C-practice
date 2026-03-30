// check anagram
#include <stdio.h>
int main()
{
    char str1[100],str2[100];
    int i, len1=0, len2=0;
    printf("enter the first string: ");
    fgets(str1,sizeof(str1),stdin);

    printf("Enter the second string:  ");
    fgets(str2,sizeof(str2),stdin);

    // len1 = 0, len2 = 0 ;
    while (str1[len1] != '\0' )
    {
        len1++;
    }

    while (str2[len2] != '\0' )
    {
        len2++;
    }

    if (str1[len1-1]=='\n')
    {
        str1[len1-1] = '\0';
        len1--;
    }
    if (str2[len2-1]=='\n')
    {
        str2[len2-1]='\0';
        len2--;
    }

return 0;
}

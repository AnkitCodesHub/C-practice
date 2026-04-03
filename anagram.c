// check anagram
#include <stdio.h>
#include <ctype.h>
int main()
{
    char str1[100],str2[100];
    int i;
    printf("enter the first string: ");
    fgets(str1,sizeof(str1),stdin);

    printf("Enter the second string: ");
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
    if (len1!=len2)
    {
        printf("These words are not anagram\n");
        return 0;
    }
    int count [256] = {0};
    int j = 0,k =0;
    while(str1[j] != '\0')
    {
        if(str1[j] != ' ')
        {
            count[tolower(str1[j])]++;
        }
        j++;
    }
    for ( i = 0; i<256; i++)
    {
        if (count[i] != 0)
        {
            printf("the words are not anagram");
            return 0;
        }
    }
    printf("These words are anagram\n");
    return 0;
}

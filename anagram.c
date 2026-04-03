// check anagram
#include <stdio.h>
#include <ctype.h>
int main()
{
    char str1[100],str2[100];
    int count[256] = {0};
    int i;
    printf("enter the first string: ");
    fgets(str1,sizeof(str1),stdin);

    printf("Enter the second string: ");
    fgets(str2,sizeof(str2),stdin);

    // len1 = 0, len2 = 0 ;
     for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != ' ' && str1[i] != '\n')
        {
            count[tolower(str1[i])]++;
        }       
    }

     for (i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] != ' ' && str2[i] != '\n')
        {
            count[tolower(str2[i])]--;
        }
    }
     for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
        {
            printf("These words are NOT anagrams\n");
            return 0;
        }
    }

    printf("These words are anagrams\n");
    return 0;
}

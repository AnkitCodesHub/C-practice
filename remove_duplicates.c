#include <stdio.h>
#include <ctype.h>
 int main()
 {
    char str[100];
    int seen[256] = {0};
    printf("Enter the characters: ");
    fgets(str,sizeof(str),stdin);
    printf("without duplicates: ");

    for(int i = 0; str[i] !='\0'; i++)
    {
        if (str[i] == '\n')//check for new line 
        {
            continue;
        }
        unsigned char c = tolower(str[i]);
        if(seen[c] == 0)
        {
            printf("%c",str[i]);
            seen[c] = 1;
        
        }
    }
    printf("\n"); 
    return 0;

 }
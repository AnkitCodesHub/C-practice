// check the number of vowels and consonats in a string 
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int vowels=0,consonants=0;
    char str[100];
    printf("Enter the string: ");
    // scanf("%s",str); this does not read when spae are there 
    fgets(str,sizeof(str),stdin); //this will read the  string after spaces also 
    for (i = 0; str[i] != \0;i++)
    {
        if ((str[i]>='a'&&atr[i]<='z')|| (str[i]>='a' && str[i]<='z'))
        char ch = tolower(str[i]);
    if(ch=='a'||ch == 'e'|| ch=='i' || ch=='o'||)
    {
        vowels++;
    }
    else
    {
        consonants++;
    }
    }
    printf("vowels: %d\n ",vowels);
    printf("Consonants: %d\n",consonants);
    return 0;
}
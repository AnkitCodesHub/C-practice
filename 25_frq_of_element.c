#include<stdio.h>
int main()
{
    int a[10],f[10],n,i,j,count;
    int visited = -1;
    printf("\n enter the number of values\n");
    scanf("%d",&n);
    printf("\n Enter values\n");
    
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       count = 1;
        for (j=i+1;j<n;j++)
        {    
            if (a[i]==a[j])
            {
                count ++;
            }
        }
        f[i] = count;
    }
    printf("\nFrequencies:\n");
    for( i=0;i<n;i++)
    {
        printf("%d occured %d times",a[i],f[i]);
    }
    return 0;
}
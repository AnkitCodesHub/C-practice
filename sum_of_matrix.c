// Addition of matrix 
#include <stdio.h>
int main()
{
    int a[2][3],b[2][3],c[2][3],i,j;
    printf("Enter first matrix: \n");
    for (i = 0; i < 2; i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d ",&a[i][j]);
        }
        printf("\n");
    }
    printf("\n the first matrix is \n");
    for (i = 0; i < 2; i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("Enter second matrix: \n");
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d ",&b[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is :\n");
      for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    // printf("The third matrix is %d:\n",c[i][j]);
    for (i = 0; i < 2; i++)
    {
        for(j=0; j<3; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        printf("\n");
    }
    printf("The sum of matrices are: \n");
     for (i = 0; i < 2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
 return 0; 
}
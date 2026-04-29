#include<stdio.h>
#define N 50
int main()
{
    // initialize the matrices and other integers
    int a[N][N],b[N][N],c[N][N],i,j,sum,m,n,p,q;
    //input size of first matrix
    printf("Enter the rows and columns of first matrix:\n ");
    scanf("%d %d",&m, &n);
    // input first matrix
    printf("enter first matrix\n")
    for(i = 0; i < m; i++)
    {
        for (j = 0; j<n; j++)
        {
            scanf("%d",a[i][j]);
        }
    }
    // input size of second matrix
    printf("enter rows and columns of second matrix: \n");
    scanf("%d %d",&p,&q);
    // input second matrix
    printf("\n enter seond matrix: \n");
    for (i=0;i<p;i++)
    {
        for (j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    // printt the first matrix
    printf("\nThe first matrix is: ");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    // print the second matrix
    printf("\n second matrix is: \n");
    for(i=0;i<p;i++)
    {
        for (j=0;j<q;j++)
        {
            printf("%d\t")
        }
        printf("\n");
    }
    // check the condition for multiplication
    if (n!=p)
    {
        printf("Can't multiply them");
    }
    // core multiplication logic
    else
    {
        for (i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                sum = 0; 
            }
        }
    }

}
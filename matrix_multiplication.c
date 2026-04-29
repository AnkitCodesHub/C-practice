#include<stdio.h>
#define N 50
int main()
{
    // initialize the matrices and other integers
    int a[N][N],b[N][N],c[N][N],i,j,k,sum,m,n,p,q;
    //input size of first matrix
    printf("Enter the rows and columns of first matrix:\n");
    scanf("%d %d",&m, &n);
    // input first matrix
    printf("enter first matrix\n");
    for(i = 0; i < m; i++)
    {
        for (j = 0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    // input size of second matrix
    printf("Enter rows and columns of second matrix: \n");
    scanf("%d %d",&p,&q);
    // input second matrix
    printf("\nEnter second matrix:\n");
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
    printf("\nSecond matrix is:\n");
    for(i=0;i<p;i++)
    {
        for (j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
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
                for(k=0;k<n;k++)
                {
                    sum = sum+(a[i][k]*b[k][j]);
                } 
                c[i][j] = sum;
            }
        }
        // print the multiplied thing 
        printf("Multiplication is:\n");
        for (i = 0; i<m; i++)
        {
            for (j=0;j<q;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
}
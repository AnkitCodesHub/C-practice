#include<stdio.h>
int main()
{
    // initialising the integers
    int a[2][3],i,j;
    printf("enter the elements of matrix\n");
    // checking the values
    for(i=0;i<2;i++)
    {
      for(j=0;j<3;j++)
      {
        scanf("%d ",&a[i][j]);
      }  
    }
    // for printing the value of matrix
    printf("matrix is\n");
      for(i=0;i<2;i++)
    {
      for(j=0;j<3;j++)
      {
        printf("%d ",a[i][j]);
      } 
      printf("\n"); 
    }
    printf("Transpose of matrix:\n");
      for(i=0;i<3;i++)
    {
      for(j=0;j<2;j++)
      {
        printf("%d ",a[j][i]);
      } 
      printf("\n"); 
    }
}

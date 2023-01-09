// Write a program in C to find the transpose of a given matrix.
#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],i,j;

    printf("Enter the matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        printf("a[%d,%d]:",i,j);
        scanf("%d",&a[i][j]);
    }

    //for printing transpose
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
                b[i][j]=0;

             b[i][j]=b[i][j]+a[j][i];
         }

     }
     printf("Transpose of the given matrix==>\n");
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("%d\t",b[i][j]);
         }
         printf("\n");
     }
     return 0;
}

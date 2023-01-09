// Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include<stdio.h>
int main()
{
    int a[50][50],s,i,j;

    printf("Enter the matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        printf("a[%d,%d]:",i,j);
        scanf("%d",&a[i][j]);
    }

    //for checking zero's in the matrix
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
               if(a[i][j]==0)
                s++;
         }

     }
    if(s>(9/2))
        printf("this is the sparse matrix and there are %d zeros in the matrices",s);
    else
        printf("this is not a sparse matrix");

     return 0;
}


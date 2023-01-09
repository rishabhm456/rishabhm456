//Write a program in C to find the sum of rows and columns of a Matrix.
#include<stdio.h>
int main()
{
    int a[50][50],i,j,s;

    printf("Enter the matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        printf("a[%d,%d]:",i,j);
        scanf("%d",&a[i][j]);
    }

    //for printing sum of rows
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {


               s=s+a[i][j];
         }
          printf("Sum of %d row of matrix==>%d\n",i+1,s);
          s=0;
     }
    //for printing sum of columns
     for(j=0;j<3;j++)
     {
         for(i=0;i<3;i++)
         {


               s=s+a[i][j];
         }
          printf("Sum of %d column of matrix==>%d\n",j+1,s);
          s=0;
     }



     return 0;
}



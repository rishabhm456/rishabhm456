 //Write a program in C to find the sum of left diagonals of a matrix.
#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],i,j,s;

    printf("Enter the matrix:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
    {
        printf("a[%d,%d]:",i,j);
        scanf("%d",&a[i][j]);
    }

    //for printing sum of left diagonals
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {

                if(i==(2-j))
               s=s+a[i][j];
         }

     }
     printf("Sum of the left diagonals of matrix==>%d\n",s);

     return 0;
}

//Write a program in C to print or display the lower triangular of a given matrix.
#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],i,j,s,n;
    printf("enter the size of the matrix:");//if size is three then the matrix will be 3X3
     scanf("%d",&n);
    printf("Enter the matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
    {
        printf("a[%d,%d]:",i,j);
        scanf("%d",&a[i][j]);
    }



   //for printing lower triangular of the matrix.
     for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {

             if(i>=j)
             b[i][j]=b[i][j]+a[i][j];

         }
     }

    printf("LOWER TRIANGULAR MATRIX==>\n");
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
              {
                printf("%d\t",b[i][j]);

                }
            printf("\n");
        }

     return 0;
}

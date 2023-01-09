#include<stdio.h>
int main()
{
    int a[50][50],i,j,s,index,max=0;

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
               if(a[i][j]==1)

               s=s+a[i][j];
               if(s>max)
               {
                   max=s;
                   index=i;
              }
         }
           s=0;
     }
     printf("row %d has maximum no of 1's",index+1);


     return 0;
}


#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],c[100][100],i,j;
    printf("Enter 9 elements for first array:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
     printf("Enter 9 elements for second array:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }


}
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
      c[i][j]=a[i][j]+b[i][j];

    printf("addition of two arrays:\n");
    for(i=0;i<3;i++)
    {
         for(j=0;j<3;j++)
        {
             printf("%d",c[i][j]);

        }
        printf("\n");
    }



}

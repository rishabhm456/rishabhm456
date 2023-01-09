//Write a program to calculate the product of two matrices each of order 3x3
#include<stdio.h>
int main()
{

    int a[50][50],b[50][50],c[100][100],i,j,k;
    printf("Enter 9 elements of first array:\n");
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
     printf("Enter 9 elements of second array:\n");
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    c[i][j];
    //for printing the result
    printf("multiplication matrix==>\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

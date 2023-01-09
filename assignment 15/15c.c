//Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
int main()
{

    int a[100],x,i;
    printf("enter the size of the array:");
    scanf("%d",&x);
    printf("enter %d numbers",x);
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    sort(a,x);
    return 0;
}
int sort(int a[],int n)
{

    int i, j,s;

    for(i=0;i<n;i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if(a[i]>a[j])
            {
                s=a[i];
                a[i]=a[j];
                a[j]=s;
            }
        }

    }
    printf("sorted array:");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}


//Write a program to calculate the average of numbers stored in an array of size 10.
#include<stdio.h>
int main()
{
    int a[10],i,s=0,avg=0;
    printf("enter 10 elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    avg=s/i;
    printf("%d",avg);
    return 0;
}


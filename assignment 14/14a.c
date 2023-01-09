//Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.

#include<stdio.h>
int main()
{
    int a[10],i,s=0;
    printf("enter 10 elements");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    printf("%d",s);
    return 0;
}

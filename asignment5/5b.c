//Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }
}

//Write a program to print the first N even natural numbers
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d ",2*i);
        i++;
    }
    return 0;
}

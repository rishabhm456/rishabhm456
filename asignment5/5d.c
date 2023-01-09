//Write a program to print the first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d ",2*i-1);
        i++;

    }
    return 0;

}

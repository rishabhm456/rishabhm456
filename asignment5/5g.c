//Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        printf("%d ",2*i);
        i--;

    }
    return 0;

}

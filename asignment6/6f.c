//Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int i=1,n,f=1;
    printf("enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        f=f*i;
        i++;

    }
    printf(" factorial of %d is %d ",n,f);
    return 0;

}

//Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,n,s;
    printf("enter a number");
    scanf("%d",&n);
    i=1;
    s=0;
    while(i<=n)
    {
        s=s+2*i-1;
        i++;
    }
    printf("sum of first %d odd natural numbers is %d ",n,s);
    return 0;

}

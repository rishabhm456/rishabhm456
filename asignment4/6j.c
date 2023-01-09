//Write a program to reverse a given number
#include<stdio.h>
int main()
{
    int n,m,rev;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0)
    {
        rev=n%10;
        m=m*10+rev;
        n=n/10;
    }
    printf("reverse is %d",m);
    return 0;
}

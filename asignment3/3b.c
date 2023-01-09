//Write a program to check whether a given number is divisible by 5 or not
#include<stdio.h>
int main()
{

    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%5==0)
        printf("divisible");
    else
        printf("non-divisible");
    return 0;
}

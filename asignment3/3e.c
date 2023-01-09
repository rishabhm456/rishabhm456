// Write a program to check whether a given number is a three-digit number or not
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n>=100 && n<=999)
        printf("three digit number");
    else
        printf(" not a three digit number");
    return 0;


}

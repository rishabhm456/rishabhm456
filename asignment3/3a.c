//. Write a program to check whether a given number is positive or non-positive
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n>0)
        printf("positive");
    else
        printf("non-positive");
    return 0;

}

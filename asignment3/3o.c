//Write a program to check whether a given number is positive, negative or zero
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if (n>0)
        printf("positive");
    else if (n<0)
        printf("negative");
     else if (n==0)
        printf("zero");
     return 0;

}

//Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number.
#include<stdio.h>
int main()
{
    int n,digit;
     printf("enter a number and digit");
     scanf("%d%d",&n,&digit);
     n=n*10;
     printf("%d",n+digit);
     return 0;
}

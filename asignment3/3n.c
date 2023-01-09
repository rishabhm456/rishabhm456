// Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n%7==0 || n%3==0)
        printf(" the number you entered is divisible by 3 and 7 both");
    else
        printf("the number you entered is  not divisible by 3 and 7 both");

}

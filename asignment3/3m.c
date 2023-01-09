//Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if (n%3==0 && n%2==0)
        printf("the number you entered is divisible by 3 and 2 both");
    else
        printf("the number you entered is not divisible by 2 and 3");
    return 0;
}

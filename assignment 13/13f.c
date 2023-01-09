//Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int sum(int);
int main()
{
    int x;
    printf("enter the number\n");
    scanf("%d",&x);
    sum(x);
    printf(" factorial of %d is %d",x,sum(x));
    return 0;
}
int sum (int n)
{

    if(n==1)
        return 1;
    else
    return n*sum(n-1);

}

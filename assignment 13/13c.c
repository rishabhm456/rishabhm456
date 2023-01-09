//Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int sum(int);
int main()
{
    int x;
    printf("enter the value of n\n");
    scanf("%d",&x);
    sum(x);
    printf(" sum of %d even natural numbers is %d",x,sum(x));
    return 0;
}
int sum (int n)
{

    if(n==0)
        return 0;
    else
    return 2*n+sum(n-1);

}

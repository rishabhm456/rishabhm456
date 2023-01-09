//Write a recursive function to calculate sum of first N odd natural numbers
#include<stdio.h>
int sum(int);
int main()
{
    int x;
    printf("enter the value of n\n");
    scanf("%d",&x);
    sum(x);
    printf(" sum of %d odd natural numbers is %d",x,sum(x));
    return 0;
}
int sum (int n)
{

    if(n==1)
        return 1;
    else
    return 2*n-1+sum(n-1);

}

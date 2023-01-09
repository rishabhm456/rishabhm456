//Write a recursive function to calculate sum of squares of first N natural numbers
#include<stdio.h>
int sum(int);
int main()
{
    int x;
    printf("enter the value of n\n");
    scanf("%d",&x);
    sum(x);
    printf(" sum of squares of %d natural numbers is %d",x,sum(x));
    return 0;
}
int sum (int n)
{

    if(n==1)
        return 1;
    else
    return n*n+sum(n-1);

}

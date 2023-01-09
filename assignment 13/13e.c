// Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sum(int);
int main()
{
    int x;
    printf("enter the number\n");
    scanf("%d",&x);
    sum(x);
    printf(" sum of  digit of %d is %d",x,sum(x));
    return 0;
}
int sum (int n)
{

    if(n==0)
        return 0;
    else
    return n%10+sum(n/10);

}

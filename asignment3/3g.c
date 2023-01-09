//Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the coefficient of x^2");
    scanf("%d",&a);
    printf("enter the coefficient of x");
    scanf("%d",&b);
    printf("enter the constant of quadratic equation");
    scanf("%d",&c);
    if (b*b-4*a*c>0)
        printf("real and unequal roots");
    else if (b*b-4*a*c==0)
        printf("real and equal roots");
    else if (b*b-4*a*c<0)
        printf("unequal and imaginary roots");
    return 0;

}

#include<stdio.h>
int main()
{

    int n,a,b,c,s;
    printf("enter a three digit  number");
    scanf("%d",&n);
    a=n/100;
    n=n%100;
    b=n%10;
    c=n/10;
    s=a+b+c;

    printf("summation of digits=%d",s);
    return 0;


}

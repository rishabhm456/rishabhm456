//Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,s;
    printf("enter a number");
    scanf("%d",&n);
    i=1;
    s=0;
    while(i<=n)
    {
        s=s+i*i*i;
        i++;
    }
    printf("sum of cubes of first %d natural numbers is %d",n,s);
    return 0;

}

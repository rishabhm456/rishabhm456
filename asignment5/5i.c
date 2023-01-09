//Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d ",i*i*i);
        i++;
    }
    return 0;
}

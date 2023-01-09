//Write a program to print a table of N
#include<stdio.h>
int main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    i=1;
    while(i<=10)
    {
        printf("%d\n",n*i);
        i++;
    }
    return 0;
}

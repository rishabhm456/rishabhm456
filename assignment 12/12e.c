//Write a recursive function to print first N even natural numbers
#include<stdio.h>
void num(int);
int main()
{
    int n;
     printf("enter the value of n");
    scanf("%d",&n);
    num(n);
    return 0;

}
void num(int x)
{
    int p;
        if(x==0)
        return 0;

    num(x-1);
     printf("%d ",2*x);

}




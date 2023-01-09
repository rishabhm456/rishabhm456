//Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void odd(int);
int main()
{
    int n;
    printf("enter the value of N\n");
    scanf("%d",&n);
    odd(n);

}
void odd(int x)
{
    int i=1;
    while(i<=x)
    {
        printf("%d ",2*i-1);
        i++;
    }
}

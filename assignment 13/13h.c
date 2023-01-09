//Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fibo(int);
int main()
{
    int n,i;
    printf("enter the value of n");
    scanf("%d",&n);
    fibo(n);
    for(i=0;i<=n;i++)
    printf("%d  ",fibo(i));
    return 0;
}
int fibo(int x)
{
    int res=0;
    if(x==0 || x==1)
        return x;
    else
    return fibo(x-1)+fibo(x-2);

}

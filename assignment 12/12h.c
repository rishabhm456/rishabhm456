#include<stdio.h>
void binary(int);
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    binary(x);
    return 0;
}
void binary(int n)
{
    if(n==0)
        return;
    else
      binary(n/2);
    printf("%d",n%2);
}

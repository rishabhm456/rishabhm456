#include<stdio.h>
void octal(int);
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    octal(x);
    return 0;
}
void octal(int n)
{
    if(n==0)
        return;
    else
      octal(n/8);
    printf("%d",n%8);
}


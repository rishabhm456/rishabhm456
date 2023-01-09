#include<stdio.h>
int main()
{
    int n,digit;
    printf("enter a number");
    scanf("%d",&n);
      n=n/10;
    printf("after operation number=%d", n*10);

    return 0;
}

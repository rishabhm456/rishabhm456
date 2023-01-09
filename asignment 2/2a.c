#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    n=n%10;
    printf("the unit digit= %d",n);
    return 0;


}

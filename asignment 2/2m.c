#include<stdio.h>
int main()
{
    int n=0,rem=0,num=0;
    printf("enter a number");
    scanf("%d",&n);
    num=n/10;
    rem=n%10;
    n=rem*100+num;
    printf("%d",n);
    return 0;

}

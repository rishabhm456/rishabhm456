//Write a function to calculate simple interest. (TSRS)

#include<stdio.h>
int si(int,int,int);
int main()
{
     int p,r,t,a;
    printf("enter principle,rate and time");
    scanf("%d%d%d",&p,&r,&t);
   a= si(p,r,t);
    printf("%d",a);
    return 0;
}
int si(int x, int y,int z)
{
    int a;
     a=x*y*z/100;
    return (a);
}

#include<stdio.h>
int lcm(int,int);
int main()
{
    int a,b,r;
    r=lcm(a,b);
    printf("lcm is %d",r);
    return 0;
}
int lcm (int x ,int y)
{
    int l;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
    for(l=2;l<=x*y;l++)
    {
        if(l%x==0 && l%y==0)
        break;

    }
    return l;
}

#include<stdio.h>
int main()
{
    int a,b,h;
    int min;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
    for(h=min;h>=1;h--)
    {
        if(a%h==0&&b%h==0)
            break;
    }
    printf("hcf is %d",h);
    return 0;
}

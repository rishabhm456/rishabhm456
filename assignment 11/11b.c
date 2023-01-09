#include<stdio.h>
int hcf(int,int);
int main()
{
    int a,b,res;
    res=hcf(a,b);
    printf("hcf is %d",res);
    return 0;
}
int hcf(int x ,int y)
{
    int h;
    int min;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
      min=x<y?x:y;
    for(h=min;h>=1;h--)
    {
        if(x%h==0 && y%h==0)
            break;
    }
    return (h);

}

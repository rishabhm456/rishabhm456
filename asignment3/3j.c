//Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage

#include<stdio.h>
int main()
{
    int cp,sp,lp,pp;
    printf("enter the selling price");
    scanf("%d",&sp);
    printf("enter the cost price");
    scanf("%d",&cp);
    if (sp>cp)
    {
        pp=100*(sp-cp)/cp;
        printf("profit percentage=%d",pp);
    }
    else
    {
        lp=100*(cp-sp)/cp;
        printf("loss percentage=%d",lp);
    }
    return 0;
}

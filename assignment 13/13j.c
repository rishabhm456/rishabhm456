#include<stdio.h>
int power(int,int);
int main()   // driver function
{
    int base,x,res;
    printf("enter the base number: ");
    scanf("%d",&base);
    printf("enter the power: ");
    scanf("%d",&x);
    res=power( base,x);
    printf("%d^%d=%d",base,x,res);
    return 0;
}
int power(int base,int x)//function for calculate power
{
    if(x!=0)
        return base*power(base,x-1);//example-3^4==3*3^3
    else
        return 1;//because if we calculate number^1 then we get number
}

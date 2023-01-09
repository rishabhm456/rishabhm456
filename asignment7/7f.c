//Write a program to print all Prime numbers under 100
#include<stdio.h>
int main()
{
    int i,x,a=1,b=100;
    for(x=a+1;x<=100-1;x++)
    {
        for(i=2;i<=100;i++)
            if(x%i==0)
            break;
        if(i==x)
                printf("%d \n",x);
    }
    return 0;



}

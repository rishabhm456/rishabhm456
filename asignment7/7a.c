//Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("enter number of terms:");
    scanf("%d",&n);
    printf("%d,%d",a,b);
    while(1)
    {
        if(c==n)
        {

            break;
        }
        c=a+b;
        a=b;
        b=c;
    }

    return 0;
}


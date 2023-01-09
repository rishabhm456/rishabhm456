//Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int n,i,a,b;
    printf("enter the range of the prime number");
    scanf("%d%d",&a,&b);

    for(n=a+1;1;n++)
    {
        for(i=2;i<=b;i++)
            if(n%i==0)
             break;
        if(i==n)
            {
                printf("%d\n",n);

                break;
            }
    }
    return 0;

}

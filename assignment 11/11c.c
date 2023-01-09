//Write a function to check whether a given number is Prime or not. (TSRS)
#include<stdio.h>
int prime(int);
int main()
{
    int n;
    prime(n);
    return 0;
}
int prime(int x)
{
    int flag=0,i;
    printf("enter a number");
    scanf("%d",&x);
    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {  flag=1;
          printf("non prime");
          return 0;
          break;
        }

    }
    if(flag==0)
        printf("prime number");
                return(1);



}

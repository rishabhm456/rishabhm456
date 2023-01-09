// Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int prime(int);
int main()
{
    int a;
    prime(a);
    return 0;
}

int prime(int x)
{
     int n,i,flag=0;
     printf("enter a non prime number");
     scanf("%d",&n);

    for(x=n;1;x++)
    {
        flag=0;
        for(i=2;i<=x/2;i++)
       {
           if(x%i==0)
          {
              flag=1;
          }
       }
if(flag==0)
{
    printf(" next prime number is %d",x);
    break;

}


    }

 return 0;

}


//Write a function to print first N prime numbers (TSRN)

#include<stdio.h>
void prime(int);
int main()
{
    int a;
    prime(a);
    return 0;
}

void prime(int x)
{
     int n,i,flag=0;
     printf("enter a number");
     scanf("%d",&n);

    for(x=2;x<=n;x++)
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
    printf("%d ",x);


}


    }



}



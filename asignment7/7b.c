////Write a program to find the Nth term of the Fibonnaci series.
#include<stdio.h>
int main()
{
    int prev=0,cur=1,next,i,n;
   printf("enter the value of n ");
    scanf("%d",&n);
   // printf("1");


    for(i=1;i<=n-1;i++)
    {

       next=prev+cur;
       prev=cur;
       cur=next;

    }
    printf(" nth term is equal to %d",next);
    return 0;

}



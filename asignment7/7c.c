//Write a program to check whether a given number is there in the Fibonacci series or not
#include<stdio.h>
int main()
{
    int prev=0,cur=1,next,i,n;
   printf("enter a number ");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {

       next=prev+cur;
       prev=cur;
       cur=next;
       if(next==n)
       {
           printf("number found");
           break;
       }




      }
        if(next!=n)
       {
         printf("not found");
       }



    return 0;
}



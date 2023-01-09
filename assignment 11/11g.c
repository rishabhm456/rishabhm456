//Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fibonacci(int);
int main()
{
    int n;
    fibonacci(n);
    return 0;
}
void fibonacci(int x)
{
      int prev=0,cur=1,next,i,n;
   printf("enter the value of n:");
    scanf("%d",&n);


    for(i=1;i<=n-1;i++)
    {

       next=prev+cur;
       prev=cur;
       cur=next;
        printf("%d ",next);
    }



}

#include<stdio.h>
int main()
{
   int x=4,count=0,result=0;
   while(x!=0)
   {
       result=x&1;
       count++;
       if(result==1)
       {
           printf("%d",count);
           break;
       }
       x=x>>1;
   }
   return 0;
}

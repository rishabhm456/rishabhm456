#include<stdio.h>
int main()
{
    int i,num,res=0,rem=0;
    for(i=1;i<=1000;i++)
    {
        num=i;
        res=0;
        while(num!=0)
        {
            rem=num%10;
            res=res+rem*rem*rem;
            num=num/10;
        }
       if(res==i)
       {
           printf("%d \n",i);
       }
    }
    return 0;

}

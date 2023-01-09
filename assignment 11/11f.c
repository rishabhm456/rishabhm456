
//Write a function to print all Prime numbers between two given numbers. (TSRN)

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
     int l,h,i,flag=0;
     printf("enter lowest and higher range");
     scanf("%d%d",&l,&h);

    for(x=l;x<=h;x++)
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



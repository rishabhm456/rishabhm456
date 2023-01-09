//Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int a,b,l;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    for(l=1;l<=a*b;l++)
        if(l%a==0 && l%b==0)
          break;
     printf("lcm(%d,%d)=%d",a,b,l);
     return 0;
}

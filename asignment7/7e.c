//5. Write a program to check whether two given numbers are co-prime numbers or not
#include<stdio.h>
int main()
{
    int a,b,h;
    int min;
    printf("enter two prime numbers");
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
    for(h=2;h<=min;h++)
    {
        if(a%h==0&&b%h==0)
          {
            break;
          }
    }
    if(h==min+1)
       printf("%d and %d are co-prime numbers",a,b);
    else
        printf("%d and %d are not co-prime numbers",a,b);
       return 0;

}


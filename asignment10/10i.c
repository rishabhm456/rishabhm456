#include<stdio.h>
int digit(int);
int main()
{
    int n;
    digit(n);
    return 0;
}
int digit (x)
{
    int num,rem,digit;
    printf("enter the number and the digit");
    scanf("%d%d",&x,&digit);
    num=x;
    while(num!=0)
    {
        rem=num%10;
        if(rem==digit)
        {
            printf("%d is occured in %d",digit,x);
            return 1;
        }
        num/=10;

    }
    printf("%d is not occured in %d",digit,x);
     return 0;

}

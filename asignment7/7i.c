//Write a program to check whether a given number is an Armstrong number or not
#include<stdio.h>
int main()
{
    int n,res=0,rem=0,num;

   printf("enter a number");
   scanf("%d",&n);

      num=n;
    while(num!=0)
    {
        rem=num%10;
        res=res+rem*rem*rem;
        num=num/10;
    }
    if(res==n){
        printf("%d is  armstrong number ",n);
     }
   else
        printf("not armstrong number");

return 0;
}

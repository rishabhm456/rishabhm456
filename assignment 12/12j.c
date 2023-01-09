#include<stdio.h>
void reverse(int);
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    reverse(n);
}
void reverse(int x)
{
    int rem=0;
    if(x==0)
        return 0;
   rem=x%10;
   printf("%d",rem);
   x=x/10;
   reverse(x);

}

//. Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)
#include<stdio.h>
int permutation(int,int);
int fact(int);
int main()
{
    int n,r,p;
    printf("enter the value of n and r");
    scanf("%d%d",&n,&r);
    p=permutation(n,r);
    printf("%d",p);
}
int fact(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)

        fact=fact*i;
        return (fact);

}

int permutation(int x,int y)
{
    int c;
   c=fact(x)/fact(y);
   return c;

}


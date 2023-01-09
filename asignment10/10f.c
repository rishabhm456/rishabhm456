// Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fact(int);
int main()
{
    int a,b;
    printf("enter a number");
    scanf("%d",&a);
    b=fact(a);
    printf("%d",b);
    return 0;
}
int fact(int x)
{
    int i,fact=1;
    for(i=1;i<=x;i++)

        fact=fact*i;
        return (fact);

}

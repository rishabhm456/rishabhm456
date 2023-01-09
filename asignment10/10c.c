//. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)
#include<stdio.h>
int check(int);
int main()
{
    int a,b;
    printf("enter a number");
    scanf("%d",&a);
      check(a);
      return 0;


}
int check(int x)
 {
     if(x%2==0)
        printf("even");
        return 1;
     if(x%2!=0)
        printf("odd");
         return 0;
 }


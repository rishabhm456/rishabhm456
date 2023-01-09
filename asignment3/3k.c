/*11. Write a program to take marks of 5 subjects from the user.
 Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/
#include<stdio.h>
int main()
{
    int a,b,c,d,e,percentage;
    printf("enter the marks of 5 subjects");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
     percentage=(a+b+c+d+e)/5;
     if (percentage>=33 && percentage<=100)
        printf("passed");
     else
        printf("failed");
     return 0;

}



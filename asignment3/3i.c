//Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b&&a>c)
        printf("a is greater");
    else if(b>a&&b>c)
        printf("b is greater");
     else
        printf("c is greater");
     return 0;

}

//Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int n;
    printf("enter the year");
    scanf("%d",&n);
    if(n%100==0)
    {
        if(n%400==0)
        printf("leap year");
        else
            printf("non leap year");
    }

    else
        {
            if(n%4==0)
            printf(" leap year");
            else
                printf("non-leap year");
        }
    return 0;
}



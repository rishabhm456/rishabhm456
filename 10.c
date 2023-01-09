#include<stdio.h>
int main()
{
    int date,month,year;
    printf("enter date month and year in DD/MM/YY format");
    scanf("%d/%d/%d",&date,&month,&year);
    printf("day-%d,month-%d,year-%d",date,month,year);

}

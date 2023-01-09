#include<stdio.h>
int main()
{
    int hour=0,min=0;
    printf("enter time in HH:MM format");
    scanf("%d:%d",&hour,&min);
    printf("%d hours and %d minutes",hour,min);
    return 0;
}

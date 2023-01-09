//7. Write a program which takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three sides of triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b+c && b<a+c &&c<a+b)
        printf("triangle is valid");
     else
        printf("triangle is not valid");
     return 0;

}

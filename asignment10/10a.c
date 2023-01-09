//Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
int area(int);
int main()
{
    float r,s;
    printf("enter the radius");
    scanf("%f",&r);
    s=area(r);
    printf("area is =%f",s);
    return 0;

}
int area(int x)
{
     int ar;
     ar=3.14*x*x;
    return(ar);
}

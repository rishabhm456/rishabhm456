//6. Write a program to print greater between two numbers. Print one number of both are the same.

#include<stdio.h>
int main()
{

    int a,b;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    if (a>b)
        printf("a is greater i.e. %d",a);
    else if(b>a)
        printf("b is greater i.e.%d",b);
    else if (a==b)
      printf(" both are equal i.e.%d",a);
    return 0;


}

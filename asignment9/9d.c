#include<stdio.h>
int main()
{
    int a,b,c,ch;
    printf("1.Check whether a given set of three numbers are lengths of an equilateral triangl or not\n");
    printf("2.Check whether a given set of three numbers are lengths of sides of a isoscales triangle or not\n");
    printf("3.Check whether a given set of three numbers are right angle triangle or not\n");
    printf("4.Exit\n");
   printf("enter your choice");
   scanf("%d",&ch);
    switch(ch)
    {
        case 1: printf("enter three numbers");
                scanf("%d%d%d",&a,&b,&c);
                if(a==b && b==c)
                   printf(" the number you entered can be the sides of equilateral triangle");
                  else
                    printf("not valid");
                break;

        case 2: printf("enter three numbers");
                scanf("%d%d%d",&a,&b,&c);
                if(a==b||b==c||a==c)
                   printf(" the number you entered can be the sides of isoscales  triangle");
                 else
                    printf("not valid");
                break;
        case 3: printf("enter three numbers");
                scanf("%d%d%d",&a,&b,&c);
                if(a>b&&a>c?a*a==b*b+c*c:b*b==a*a+c*c||c*c==b*b+a*a)
                   printf(" the number you entered can be the sides of right angle triangle");
                 else
                    printf("not valid");
                break;
        case 4:exit(0);
        default:printf("invalid choice");

    }



}

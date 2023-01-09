#include<stdio.h>
int main()
{
    int a;
    printf("enter an odd or even number");
    scanf("%d",&a);
    switch(a>=0)
    {
        case 1:switch (a%2==0)
               {
                   case 1:a=a+1;
                          printf("%d",a);
                          break;
                   case 0:a=a+1;
                          printf("%d",a);
                          break;
               }break;

        case 0:printf("\n\n\tyou have to enter the number greater then or equal to ZERO\n\n");
                 exit(0);

    }
    return 0;
}

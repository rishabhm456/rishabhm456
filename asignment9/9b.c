#include<stdio.h>
int main()
{
    int a,b,res=0,ch;
     while(ch!=5)
    {
    printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n5.exit\n");
    printf("enter your choice");
    scanf("%d",&ch);

        switch(ch)
        {
            case 1:printf("enter two numbers");
                    scanf("%d%d",&a,&b);
                    res=a+b;
                    printf("sum is=%d\n",res);
                    break;
            case 2:printf("enter two numbers");
                    scanf("%d%d",&a,&b);
                    res=a-b;
                    printf("difference is=%d\n",res);
                    break;
            case 3:printf("enter two numbers");
                   scanf("%d%d",&a,&b);
                   res=a*b;
                   printf("product is=%d\n",res);
                   break;
             case 4:printf("enter two numbers");
                    scanf("%d%d",&a,&b);
                    res=a/b;
                    printf("division is=%d\n",res);
                    break;
             case 5:exit(0);
             default:printf("invalid choice");
        }
        printf("\n");
    }
    return 0;
}

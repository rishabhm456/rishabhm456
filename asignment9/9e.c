#include<stdio.h>
#include<stdlib.h>

int main()
{
    int var;
while(var!=3)
{

    printf("\n\n\n######MENU DRIVEN PROGRAMS#######\n\n\n");
      printf("enter a variable");
    scanf("%d",&var);
    switch(var)
    {
        case 1:printf("\ngood");
                break;
        case 2:printf("\nbetter");
                break;
        case 3:printf("\nbest");
                break;
        default:
                printf("invalid");


    }
}

}

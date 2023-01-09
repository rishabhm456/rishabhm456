//Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include<stdio.h>
int main()
{
    int day;
    while(day!=8)
    {
        printf("enter the day number");
        scanf("%d",&day);
        switch(day)
        {
            case 1:printf("hey! good morning ,its monday today");
                    break;
            case 2:printf("hey! good morning ,its tuesday today");
                    break;
            case 3:printf("hey! good morning its wednesday today");
                    break;
            case 4:printf("hey! good morning its thursday today");
                    break;
            case 5:printf("hey! good morning its friday today");
                    break;
            case 6:printf("hey! good morning its saturday today");
                    break;
            case 7:printf("hey! good morning its sunday today");
                    break;
            case 8: exit(0) ;
            default:printf("invalid choice");

        }
        printf("\n\n");
    }
    return 0;
}

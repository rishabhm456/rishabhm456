#include<stdio.h>
int countdigit(int);
int main()//driver function
{
    int x,res=0;
    printf("enter a number for counting digits: ");
    scanf("%d",&x);
    res=countdigit(x);
    printf("%d",res);
    return 0;
}

int countdigit(int n)//function for count digits of the entered numbers
{
   static int count=0;//because of static the count var is exit also at the end of the program;
    if(n>0)
    {
        count+=1;
        countdigit(n/10);

    }
    else
    {
        return count;
    }
}

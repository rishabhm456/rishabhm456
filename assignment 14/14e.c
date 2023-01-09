// Write a program to find the smallest number stored in an array of size 10. Take array values from the user
#include<stdio.h>
int main()
{
    int a[10],i,max=0;
    printf("enter 10 element");
          max=a[0];

    for(i=1;i<10;i++)
    {
        scanf("%d",&a[i]);
         if(max>a[i])
            max=a[i];

    }
    printf("the smallest element=%d",max);

    return 0;
}


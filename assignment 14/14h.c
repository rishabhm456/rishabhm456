//Write a program to find the second smallest number in an array.Take array values from the user
#include<stdio.h>
int main()
{
    int a[100],i,smallest=0,secondsmallest=0,n;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)

    {
        scanf("%d",&a[i]);
    }


       smallest=a[0];
    for(i=0;i<n;i++)
    {


         if(a[i]<smallest)
         {
             secondsmallest=smallest;
             smallest=a[i];
         }

         else if(a[i] < secondsmallest)
         {
             secondsmallest=a[i];
         }

     }
    printf("the second smallest element=%d",secondsmallest);

    return 0;
}



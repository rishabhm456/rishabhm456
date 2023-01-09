//Write a function to find the first occurrence of adjacent duplicate values in the array. Function has to return the value of the element.
#include<stdio.h>
int main()
{
     int a[50],n,l;
    printf("enter the size of the array:\n");
   scanf("%d",&n);

   l=sort(a,n);
   printf("the adjacent duplicate value is %d\n",l);
   return 0;

}
int sort(int a[],int x)
{
    int i;
    printf("enter the array:\n");
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    for(i=0;i<x;i++)
    {
        if(a[i]==a[i+1])
         return a[i];



    }

}



//Write a program to calculate the sum of all even numbers and sum of all odd  numbers, which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],i,sodd=0,seven=0;
    printf("enter 10 elements\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        seven=seven+a[i];
        else
            sodd=sodd+a[i];
    }
    printf("sum of all even numbers=%d\n",seven);
    printf("sum of all odd numbers=%d",sodd);
    return 0;
}

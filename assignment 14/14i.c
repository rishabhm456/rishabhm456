//Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[100],n;
    static int i;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("REVERSE ORDER : \n");
    for(i=n-1;i>=0;i--)
            printf("\n%d\n",a[i]);
   return 0;
}

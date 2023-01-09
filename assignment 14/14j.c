// Write a program in C to copy the elements of one array into another array.Take array values from the user
#include<stdio.h>
int main()
{
    int a[100],b[100],i,n,j;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS:\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
         b[i]=a[i];
    }
    printf("SECOND ARRAY:\n");
    for(i=0;i<n;i++)
    printf("%d\n\n",b[i]);
    return 0;
}

//Write a function in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
int main()
{
    int a[100],i,n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    rev(a,n);

}
void rev(int a[],int n)
{
    int i;
    printf("enter the array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("array in reverse order:\n");
    for(i=n-1;i>=0;i--)
        printf("%d\n",a[i]);


}

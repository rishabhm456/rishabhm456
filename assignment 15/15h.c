//Write a function in C to print all unique elements in an array
#include<stdio.h>
void unique(int a[],int );
int main()
{

    int a[100],n,l;
    printf("enter the size of the array:");
    scanf("%d",&n);
    unique(a,n);

    return 0;
}
void unique(int a[],int n)
{
    int i,j,count=0;
    printf("enter the array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("unique elements in the current array:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
               break;
            }

        }
            if(j==n)
            {
                count++;
                printf("%d\n",a[i]);

            }

     }

}

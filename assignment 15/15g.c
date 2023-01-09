// Write a function in C to count a total number of duplicate elements in an array
#include<stdio.h>
int main()
{

    int a[100],n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    duplicate(a,n);
}
void duplicate(int a[],int n)
{
    int i,j,count=0;
    printf("enter the array:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if(a[i]==a[j])
            count++;

        }

    }
    printf("there are %d duplicate numbers in the current array",count);

}

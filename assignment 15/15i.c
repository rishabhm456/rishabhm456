#include<stdio.h>
int main()
{
    int i,j;
    int n1;
    printf("enter the size of the first array:");
    scanf("%d",&n1);
    int a[n1];
    printf("Enter the first array:");
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    int n2;
    printf("enter the size of the second array:");
    scanf("%d",&n2);
    int b[n2];
    printf("Enter the second array:");
    for(j=0;j<n2;j++)
        scanf("%d",&b[j]);
    int c[n1+n2];
    merge(a,b,n1,n2,c);
  return 0;
}
void merge(int a[],int b[],int n1,int n2,int c[])
{
    int i=0,j=0,k=0;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
             c[k]=a[i];
             i++;
             k++;
        }
        else
        {
             c[k]=b[j];
             j++;
             k++;
        }

    }
    while(i<n1)
    {
         c[k]=a[i];
         k++;
         i++;
    }

    while(j<n2)
    {
         c[k]=b[j];
         k++;
         j++;

    }

    printf("array after merging:");
    for(i=(n1+n2)-1;i>=0;i--)
            printf("%d\n",c[i]);
}

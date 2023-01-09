// Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
int main()
{
    int n,res=0;;
    printf("ENTER THE SIZE OF THE ARRAY\n");
    scanf("%d",&n);
    res=greatest(n);
    printf("the largest element is %d",res);
    return 0;
}
int greatest(int n)
{
    int a[100],i,largest;
    printf("ENTER %d ELEMENTS\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        largest=a[0];
    for(i=0;i<n;i++)
    {

         if(largest<a[i])
        {
           largest=a[i];
        }

    }
    return(largest);

}

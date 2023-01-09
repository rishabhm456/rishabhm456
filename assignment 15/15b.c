
#include<stdio.h>
int main()
{
    int n,res=0;;
    printf("ENTER THE SIZE OF THE ARRAY\n");
    scanf("%d",&n);
    res=smallest(n);
    printf("the smallest element is %d",res);
    return 0;
}
int smallest(int n)
{
    int a[100],i,smallest;
    printf("ENTER %d ELEMENTS\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        smallest=a[0];
    for(i=0;i<n;i++)
    {

         if(smallest>a[i])
        {
           smallest=a[i];
        }

    }
    return(smallest);
}




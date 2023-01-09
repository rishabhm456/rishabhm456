#include<stdio.h>
int main()
{
    int a[100],i,largest=0,slargest=0,n;
    printf("enter the size of an array");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)

    {
        scanf("%d",&a[i]);
    }


       largest=a[0];
    for(i=0;i<n;i++)
    {


         if(largest < a[i])
         {
             slargest=largest;
             largest=a[i];
         }

         else if(a[i] > slargest)
         {
             slargest=a[i];
         }

     }
    printf("the second largest element=%d",slargest);

    return 0;
}


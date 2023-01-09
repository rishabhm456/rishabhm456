//Write a program to sort elements of an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[20],i,j,s;
     printf("enter 10 numbers");
     for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
        for(j=(i+1);j<10;j++)
        {

            if(a[i]>a[j])
            {
                s=a[i];
                a[i]=a[j];
                a[j]=s;
            }
        }

     }
     printf("sorted array:\n");
for(i=0;i<10;i++)
printf("%d\n",a[i]);

return 0;

}



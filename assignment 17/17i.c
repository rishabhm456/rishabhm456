// Write a C program to sort a string array in ascending order.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],ch;
    int i,j,n;
    printf("enter the string");
    gets(s);
    n=strlen(s);
    printf("array after sorting:\n");
    for(i=0;i<n;i++)
    {
        for(j=(i+1);j<n;j++)
        {
            if(s[i]>s[j])
            {
                ch=s[i];
                s[i]=s[j];
                s[j]=ch;
            }
        }
    }
    printf("%s",s);

}

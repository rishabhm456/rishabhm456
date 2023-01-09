//Write a program to calculate the length of the string
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,count=0;
    printf("enter the string:\n");
    gets(s);
    printf("length of the string==>");
    for(i=0;s[i];i++)
    {
       count++;

    }
    printf("%d",count);


    return 0;
}


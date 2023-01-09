 //Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,count=0,r;
    printf("enter the string:\n");
    gets(s);
    printf("Enter the character:");
    scanf("%c",&r);
    for(i=0;s[i];i++)
    {
      if(s[i]==r)
         count++;


    }
    printf("%c occurs %d times in %s",r,count,s);


    return 0;
}

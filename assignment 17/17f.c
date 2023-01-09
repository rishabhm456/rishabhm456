// Write a program to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{

    char s[20];
    int n,i,j;//for calcuating the length of string;
    printf("enter your name\n");
    gets(s);
    n=strlen(s);
    printf("REVERSE STRING==>\n");
    for(j=n;j>=0;j--)
    {
      printf("%c",s[j]);
    }
return 0;
}


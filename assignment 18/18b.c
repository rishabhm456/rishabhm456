// Write a function to reverse a string.
#include<stdio.h>
#include<string.h>
int main()
{

    char s[20];
    int n;//for calcuating the length of string;
    printf("enter your name\n");
    gets(s);
    n=strlen(s);
    rev(s,n);

return 0;
}
void rev(char s[],int n)
{
    int i;
    printf("REVERSE STRING==>\n");
    for(i=n;i>=0;i--)
    {
      printf("%c",s[i]);
    }
}


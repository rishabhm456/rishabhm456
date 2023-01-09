 //Write a program to count vowels in a given string
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,count=0,r;
    printf("enter the string:\n");
    gets(s);

    for(i=0;s[i];i++)
    {
      if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
               count++;
       if(s[i]=='A'|| s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
               count++;

    }
    printf(" there are %d vowels in %s",count,s);


    return 0;
}


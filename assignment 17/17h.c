//Write a program in C to copy one string to another string.
#include<stdio.h>
#include<string.h>
int main()
{
   char s[50],b[50];
   int i,n;
   printf("Enter the string:\n");
   gets(s);
   n=strlen(s);
  printf("copied string:\n");
   for(i=0;s[i];i++)
   {
      b[i]=s[i];
       printf("%c",b[i]);

   }


    return 0;
}


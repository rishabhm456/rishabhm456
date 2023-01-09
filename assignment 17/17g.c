//Write a program in C to count the total number of alphabets, digits and special characters in a string.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char s[50];
    int i,c1=0,c2=0,c3=0;
    printf("enter the string\n");
    gets(s);
    for(i=0;s[i];i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
             c1++;
        }

       else if(s[i]>='1' && s[i]<='9')
       {
           c2++;
       }

          else
          {
              c3++;
          }



     }
     printf("there are %d alphabets in the %s\n",c1,s);
      printf("there are %d numbers in the %s\n",c2,s);
       printf("there are %d special characters in the %s\n",c3,s);


return 0;

}



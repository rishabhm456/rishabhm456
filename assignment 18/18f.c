//. Write a function to check whether a given string is an alphanumeric string or not.
#include<stdio.h>
#include<ctype.h>
void alph(void);
int main()
{
  alph();
  return 0;

}
void alph()
{
    int i;
    int flag=0;
    char s[50];//this code is not right need to check
    printf("enter a string");
    gets(s);

   for (i=0;s[i];i++)
    {
        if(s[i]>='0' && s[i]<='9')
               flag=1;
        if(s[i]>='a' && s[i]<='z')
            flag=2;
       if(flag==1 && flag==2)
                printf("alphanumeric");

        else
            printf("non alphanumeric");
            break;

    }
}

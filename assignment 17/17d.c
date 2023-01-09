// Write a program to convert a given string into uppercase
#include<string.h>
int main()
{
    char s[20];
    int i;
    printf("ENTER THE STRING IN lowercase:\n");
    gets(s);
    printf("STRING IN UPPERCASE==>\n");
    for(i=0;s[i];i++)
    {
        if(s[i]>='a' && s[i]<='z')
           s[i]=s[i]-32;
    }
     printf("%s",s);



    return 0;
}



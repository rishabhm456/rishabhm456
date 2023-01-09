//Write a program to convert a given string into lowercase
#include<stdio.h>
int main()
{
    char s[50];
    int i;
    printf("Enter a string in uppercase\n");
    gets(s);
    for(i=0;s[i];i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]+32;
    }
    printf("%s",s);
    return 0;
}

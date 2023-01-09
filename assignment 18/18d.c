// Write a function to transform string into uppercase
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("enter your name/string\n");
    gets(s);
    upper(s);
    return 0;
}
void upper(char s[])
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]=s[i]-32;

    }
    printf("**** PLEASE WAIT MY OWNER YOUR OUTPUT WILL BE SHOW BELOW****\n||==>");
     printf("%s",s);


}

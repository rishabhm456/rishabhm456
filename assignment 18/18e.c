// Write a function to transform string into lowercase
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    printf("enter your name/string\n");
    gets(s);
    lower(s);
    return 0;
}
void lower(char s[])
{
    int i;
    for(i=0;s[i];i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]+32;

    }
    printf("**** PLEASE WAIT MY OWNER YOUR OUTPUT WILL BE SHOW BELOW****\n||==>");
     printf("%s",s);


}


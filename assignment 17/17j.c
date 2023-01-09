//Write a program in C to Find the Frequency of Characters
#include<stdio.h>
#include<string.h>
int main()
{
    char s[50],freq[256]={0};
    int i;
    printf("enter a string:\n");
    gets(s);

    for(i=0;s[i];i++)
    {
        freq[s[i]]++;
    }
    for(i=0;i<256;i++)
    {
        if(freq[i])
        {
            printf("%c occurs %d times\n",i,freq[i]);
        }


    }

}

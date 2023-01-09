// Write a function to calculate length of the string
#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];

    printf("enter the string:\n");
    gets(s);
    len(s);

 return 0;
}
void len(char s[])
{
     int i,count=0;
     printf("length of the string==>");
    for(i=0;s[i];i++)
    {
       count++;

    }
    printf("%d",count);

}


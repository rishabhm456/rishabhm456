//Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main()
{
    char n;
    printf("enter an alphabet");
    scanf("%c",&n);
    if(n>='a' && n<='z')
        printf("lowercase");
    else if(n>='A' && n<='Z')
        printf("uppercase");
    else if(n>=0 && n<=9)
        printf("digit");
    else
        printf("special character");
    return 0;

}

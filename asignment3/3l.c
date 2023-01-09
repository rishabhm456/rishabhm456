//Write a program to check whether a given alphabet is in uppercase or lowercase
#include<stdio.h>
int main()
{
    char n;
    printf("enter an alphabet");
    scanf("%c",&n);
    if (n>='a' && n<='z')
        printf("lowercase");
    else if (n>='A' && n<='Z')
        printf("uppercase");
     return 0;

}

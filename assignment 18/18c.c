//write a function to compare two strings .
#include <stdio.h>

int main()
{
  char str1[100], str2[100];


  printf("Enter the first string: ");
  gets(str1);

  printf("Enter the second string: ");
  gets(str2);
  compare(str1,str2);


  return 0;
}
void compare(char str1[],char str2[])
{
    int i;
    for(i = 0; str1[i] == str2[i] && str1[i] == '\0'; i++);

  if(str1[i] > str2[i])
  {
    printf("string 1 is bigger then string 2.\n");
  }
  else if(str1[i] < str2[i])
  {
    printf(" string 2 is bigger then string 1.\n");
  }
  else
  {
    printf(" Both string are equal.\n");
  }


}

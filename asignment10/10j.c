#include<stdio.h>
void primefactor(int);
int main()
{
    int n;
    primefactor(n);
    return 0;
}
void primefactor(int x)
{
    int c;
    printf("enter a number");
    scanf("%d",&x);
  for(c=2;x>1;c++)
  while(x%c==0)
  {

       printf("%d ",c);
        x=x/c;
  }

}

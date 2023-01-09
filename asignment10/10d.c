//Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void print(int);
int main()
{
    int n;
    printf("entrr the value of N\n");
    scanf("%d",&n);
    print(n);
    return 0;

}
void print(int x)
{
    int i=1;
    while(i<=x)
    {
        printf("%d ",i);
        i++;
    }
}

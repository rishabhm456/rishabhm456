#include<stdio.h>
int main()
{

    int n;
    printf("enter a number");
    scanf("%d",&n);
    if(n&1)
        printf("odd ");
    else
            printf("even");
    return 0;
}

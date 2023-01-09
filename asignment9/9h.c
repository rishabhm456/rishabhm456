int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    switch(a>0)
    {
        case 1:a=a*-1;
               printf("%d",a);
               break;
        case 0:a=a*-1;
               printf("%d",a);
               break;
    }
    return 0;
}



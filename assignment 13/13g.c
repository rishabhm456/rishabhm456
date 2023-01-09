/*1st way
#include<stdio.h>
int hcf(int,int);
int main()
{
    int x,y,res;
    printf("enter two numbers for hcf");
    scanf("%d%d",&x,&y);
    res=hcf(x,y);
    printf(" hcf of %d and %d is %d",x,y,res);
    return 0;
}
int hcf(int a,int b)
{
   {
       if(a>b)
        return hcf(a-b,b);
       if(b>a)
        return hcf(a,b-a);
       else
      return a;
   }

}*/
//2nd way
#include<stdio.h>
int hcf(int,int);
int main()
{
    int x,y,res;
    printf("enter two numbers for hcf");
    scanf("%d%d",&x,&y);
    res=hcf(x,y);
    printf(" hcf of %d and %d is %d",x,y,res);
    return 0;
}
int hcf(int a,int b)
{
   {
       if(b==0)
        return a;
       else
         return hcf(b,a%b);

   }

}



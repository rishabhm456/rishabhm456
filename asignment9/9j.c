#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,root1,root2,d1,i;
    printf("enter the value of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
     d=b*b-4*a*c;
     d1=4*a*c-b*b;
     switch(d>=0)
     {
        case 1:if(d>0)
                  {
                      root1= (-b)/(2*a) + sqrt(d)/(2*a);
                      root2=(-b)/(2*a) - sqrt(d)/(2*a);
                      printf("root1 = %f and root2=%f",root1,root2);
                      break;
                  }
               if(d==0)
               {
                   root1= (-b)/2*a;
                   printf("root=%f",root1);
                   break;
               } break;
        case 0: root1=(-b)/(2*a)+sqrt(-d)/(2*a);
                root2:(-b)/(2*a)+sqrt(-d)/(2*a);
                printf("root1=%f and root2=%f",root1,root2);

     }

}

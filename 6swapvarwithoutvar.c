#include<stdio.h>
int main()
{
 int a,b;
 printf("Enter a \t");
 scanf("%d",&a);
 printf("Enter b \t");
 scanf("%d",&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("the value of a is %d \n",a);
 printf("the value of b is %d",b);
return 0;
}

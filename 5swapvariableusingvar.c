#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter a \t");
scanf("%d",&a);
printf("Enter b \t");
scanf("%d",&b);
printf("Enter c \t");
scanf("%d",&c);
c=a+b;
a=c-a;
b=c-b;
printf("the value of a is %d \n",a);
printf("the value of b is %d",b);
return 0;
}
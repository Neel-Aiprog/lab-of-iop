#include<stdio.h>
int main()
{
int a,b;
printf("enter your two numbers and all arithmetic operations will be performed \t");
scanf("%d %d",&a,&b);
switch(a*b)
{
default:printf("the answer is %d \n",a*b);
}
switch(a/b)
{
default:printf("the answer is %d \n",a/b);
}
switch(a-b)
{
default:printf("the answer is %d \n",a-b);
}
switch(a+b)
{
default:printf("the answer is %d \n",a+b);
}
return 0;
}
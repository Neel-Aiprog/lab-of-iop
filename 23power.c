#include<stdio.h>
int main()
{
int a,b,c=1,d;
printf("enter the number and power \t");
scanf("%d %d",&a,&b);
d=a;
while(b>c)
{
a=a*d;
c++;
}
printf("answer is %d",a);
return 0;
}
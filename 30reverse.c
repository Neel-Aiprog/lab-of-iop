#include<stdio.h>
int main()
{
// here this program will show how to reverse 3 and 2 digit number
int a,b,sum1=0,sum=0,sum2=0;
printf("enter your number \t");
scanf("%d",&a);
while(a!=0&&a>100)
{
b=a%10;
sum2=sum2+(b*100);
a=a/10;
}
while(a!=0&&a>10)
{
b=a%10;
sum1=(b*10)+sum1;
a=a/10;
}
while(a!=0&&a<10)
{
b=a%10;
sum=sum+b;
a=a/10;
}
printf("the reverse is %d",sum+sum1+sum2);
return 0;
}
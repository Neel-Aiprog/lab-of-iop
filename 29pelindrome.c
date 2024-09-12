#include<stdio.h>
int main()
{
//here this program shows whether a 2 or a 3 digit number is a pelindrome or not
int a,b,sum1=0,sum=0,sum2=0,sum3,temp;
printf("enter your number \t");
scanf("%d",&a);
temp=a;
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
sum3=sum1+sum+sum2;
if(sum3==temp)
{
printf("yes");
}
else{
printf("no");
}
return 0;
}
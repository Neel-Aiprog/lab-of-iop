#include<stdio.h>
int main()
{
int a,b,sum=0,sum1=0,c;
printf("enter your number \t");
scanf("%d",&a);
while(a!=0)
{
b=a%10;
sum=sum+b;
a=a/10;
}
printf("sum of diggits is %d \n",sum);
while(sum>0)
{
c=sum%10;
sum1=sum1+c;
sum=sum/10;
}
printf("the single digit is %d",sum1);
return 0;
}
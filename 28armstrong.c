#include<stdio.h>
int main()
{ 
//here this program shows whether a 3 digit number is a armstrong number or not   
int a,b,sum=0,temp;
printf("enter your number \t");
scanf("%d",&a);
temp=a;
while(a!=0)
{
b=a%10;
sum=sum+(b*b*b);
a=a/10;
}
if(sum==temp)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}


#include<stdio.h>
int main()
{
int a,b=2;
printf("enter your number \t");
scanf("%d",&a);
for(b=2;b<=a;b++)
{
if(a%b==0)
{
break;
}
}
if(b==a)
{
printf("number is prime");
}
else{
printf("number is composite");
}
return 0;
}
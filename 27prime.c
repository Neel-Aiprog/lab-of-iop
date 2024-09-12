#include<stdio.h>
int main()
{
int i,j,num;
printf("enter your number \t");
scanf("%d",&num);
for(i=2;i<=num;i++)
{
if(num%i==0)
{
break;
}
}
if(num==i)
{
printf("prime ");
}
else
{
printf("not prime ");
}
return 0;
}
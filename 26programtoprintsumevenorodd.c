#include<stdio.h>
int main()
{
int n,sume=0,sumo=0,m=1;
printf("enter your number \t");
scanf("%d",&n);
while(m<=n)
{
if(m%2==0)
{
sume=sume+m;
}
else
{
sumo=sumo+m;
}
m++;
}
printf("the sum of odd numbers is %d \n",sumo);
printf("the sum of even numbers is %d \n",sume);
return 0;
}
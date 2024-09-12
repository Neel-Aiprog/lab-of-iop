#include<stdio.h>
int main()
{
int i,sum=0,n;
printf("enter the number \t");
scanf("%d",&n);
for(int i=n;i>0;i--)
{
printf("%d \n",i);
sum=sum+i;
}
printf("the sum uptil negeative is %d",sum);
return 0;
}
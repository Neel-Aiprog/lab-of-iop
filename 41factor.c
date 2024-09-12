#include<stdio.h>
int main()
{
int a,b;
printf("enter your number \t");
scanf("%d",&a);
for(b=1;b<=a;b++)
if(a%b==0)
{
printf("%d is a factor of a \n",b);
}
return 0;
}
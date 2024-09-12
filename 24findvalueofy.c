#include<stdio.h>
#include<math.h>
int main()
{
int x,y,n;
printf("enter your x and n \t");
scanf("%d %d",&x,&n);
switch(n)
{
case 1:
{
y=1+x;
printf("value of y is %d",y);
break;
}
case 2:
{
y=1+(x/n);
printf("value of y is %d",y);
break;
}
case 3:
{
y=1+pow(x,n);
printf("value of y is %d",y);
break;
}
default:
{
y=1+n*x;
printf("value of y is %d",y);
break;
}
}
return 0;
}
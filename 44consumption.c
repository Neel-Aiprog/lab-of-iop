#include<stdio.h>
int main()
{
int u;
//here u determines units and  c determines cost per charge and it is  calculated based on u!!
printf("enter your consumption in units \t");
scanf("%d",&u);
if(u>0&&u<=200)
{
printf("Amount to be paid by customer is %f",((0.50)*u));
}
else if(u>=201&&u<=400)
{
printf("Amount to be paid by customer is %f",(((0.65)*u)+100));
}
if(u>=401&&u<=600)
{
printf("Amount to be paid by customer is %f",(((0.80)*u)+230));
}
else if(u>600)
{
printf("Amount to be paid by customer is %d",(125*u)+425);
}
return 0;
}
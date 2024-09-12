#include<stdio.h>
int main()
{
float h,m,s,sum;
printf("Enter time in hours \t");
scanf("%f",&h);
printf("Enter the time in minutes \t");
scanf("%f",&m);
printf("Enter the time in seconds \t");
scanf("%f",&s);
printf("the total time in seconds is %f",sum=s+(h)*(3600.0)+(m)*(60.0));
return 0;
}
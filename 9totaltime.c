#include<stdio.h>
int main()
{
int h,m,s,sum;
printf("Enter time in hours \t");
scanf("%d",&h);
printf("Enter time in minutes \t");
scanf("%d",&m);
printf("Enter time in seconds \t");
scanf("%d",&s);
printf("The total time in seconds is %d \n",sum=(s)+(h)*(3600.0)+(m)*(60.0));
printf("The time is %d hours:%d minutes:%d seconds",h,m,s);
return 0;
}
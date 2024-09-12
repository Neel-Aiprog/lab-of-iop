#include<stdio.h>
int main()
{
float d,h,m;
float period = 31558150.0;
d=31558150.0/(3600.0*24.0);
h=31558150.0/24.0;
m=31558150.0/60.0;
printf("The time in days is %f \n",d);
printf("the time in hours is %f\n",h);
printf("The time in minutes is %f\n",m);
return 0;
}
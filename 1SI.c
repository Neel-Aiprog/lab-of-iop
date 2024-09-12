#include <stdio.h>
int main()
{
int p,r,t; // p= principal r= rate of intrest t=time in years
printf("Enter Principal \t");
scanf("%d",&p);
printf("Enter rate of intrest \t");
scanf("%d",&r);
printf("Enter time in years \t");
scanf("%d",&t);
printf("The calculated simple intrest is %f", (p*r*t)/100.0);
return 0;
}

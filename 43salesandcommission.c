#include<stdio.h>
int main()
{
int s;
printf("enter your sales in rupees \t");
// here s determines sale in rupees and commission is calculated based on it!!
scanf("%d",&s);
if(s<=500)
{
printf("commission is %d",((5*s)/100));
}
else if(s>500&&s<=2000)
{
printf("commission is %d",((10*s)/100)+35);
}
if(s>2000&&s<=5000)
{
printf("commission is %d",((12*s)/100)+185);
}
else if(s>5000)
{
printf("commission is %f",(((12.5)*s)/100));
}
return 0;
}
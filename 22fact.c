#include<stdio.h>
int main()
{
long long int a,mult=1;
printf("enter the number you want factorial of \t");
scanf("%lld",&a);
while(a>0)
{ 
    mult=mult*a;
    a=a-1;
}
printf("the factorial is %lld",mult);
//here long long int is used so factorial can be calculated for many numbers like 13,14,15,16
return 0;
}
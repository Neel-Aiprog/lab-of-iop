#include<stdio.h>
int main()
{
// here the output will take a little time pls wait patiently!!!
int a,mult=1,c;
printf("enter the number you want table of \t");
scanf("%d",&a);
while((a*mult)<=160)
{
c=mult*a;
mult++;
printf("the answer is %d \n",c);
}
return 0;
}
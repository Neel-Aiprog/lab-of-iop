#include<stdio.h>
int main()
{
printf("here is the fibonacci series:");
int a=0,b=1,c;
printf("%d,",a);
printf("%d,",b);
for(c=0;c<=10;c++)
{
c=a+b;
printf("%d,",c);
a=b;
b=c;
}
return 0; 
}
#include<Stdio.h>
int main()
{
int a=1,b=1,mult=1,n,m=1,e=1;
// here the code will take a lot of time to run so pls wait patiently!!!
printf("enter number upto which you want series \t");
scanf("%d",&n);
while(a!=0)
{
mult=mult*a;
a=a-1;
}
mult=b;
while(m<=n)
{
printf("%d/%d!+",e,b);
e++;
b++;
m++;
}
return 0;
}
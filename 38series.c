#include<Stdio.h>
int main()
{
int a=1,n;
// here the code will take a lot of time to run so pls wait patiently!!!
printf("enter the number you want the series up to \t");
scanf("%d",&n);
while(a!=0&&a<=(n))
{
printf("%d \n",a*a);
a++;
}
return 0;
}
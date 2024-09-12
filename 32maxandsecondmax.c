#include<stdio.h>
int main()
{
int n,i=0,maxn,secondmax,N;
// here the user cant enter only two numbers!! here we use one max number taken by the user to build the whole logic
// here the code takes a little time to run pls be patient !!!
printf("enter the amount of numbers(it should be greater than 2) \t");
scanf("%d",&N);
printf("enter your number 1 : \t");
scanf("%d",&maxn);
for(int n;i<=n;i++)
{
printf("enter your numbers \t");
scanf("%d",&n);
if(maxn>n)
{
if(n>secondmax)
{
printf("%d is greatest and %d is second max",maxn,n);
break;
}
if (secondmax>n)
{
printf("%d is greatest and %d is second max",maxn,secondmax);
break;
}
else if(n>maxn)
{
maxn=secondmax;
printf("%d is greatest and %d is second max",n,maxn);
}
}
}
return 0;
}


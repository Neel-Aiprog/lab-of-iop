#include<Stdio.h>
int main()
{
int n,i=0,maxn,minn,N;
// here the user cant enter only two numbers!! here we use one max number  and one min number taken by the user to build the whole logic
// the code will run a little late on output pls be patient !!!
printf("enter the amount of numbers you want to add(it should be greater than 2) \t");
scanf("%d",&N);
printf("enter your  1st number:");
scanf("%d",&maxn);
printf("enter your second number: \t");
scanf("%d",&minn);
for(int i=0;i<=n;i++)
{
printf("enter your numbers \t");
scanf("%d",&n);
if(maxn>n&&minn<n)
{
printf("%d is greatest and %d is smallest",maxn,minn);
break;
}
if(n>maxn&&maxn<minn)
{
printf("%d is greatest and %d is smallest",n,maxn);
break;
}
if(n<minn&&maxn>minn)
{
printf("%d is greatest and %d is smallest",maxn,n);
break;
}
}
return 0;
}
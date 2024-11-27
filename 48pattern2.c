#include<stdio.h>
int main()
{
int a,b,n;
printf("enter the number of time you want the loop to run \t");
scanf("%d",&n);
    for(int a=1;a<=n;a++)
    {
    for(int b=1;b<=a;b++)
    {
    printf("%d",b);
    }
    printf("\n");
    }
}
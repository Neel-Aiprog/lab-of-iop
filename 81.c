#include<stdio.h>
int condition(int a);
int main()
{
int num;
printf("enter your number\t");
scanf("%d",&num);
condition(num);
}
int condition(int num)
{
int i;
 for(i=2;i<=num;i++)
    {
    if(num%i==0)
    {
    break;
    }
    }
    if(num==i)
    {
    printf("1 ");
    }
    else
    {
    printf("0 ");
    }
}

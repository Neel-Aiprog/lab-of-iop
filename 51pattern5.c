#include<stdio.h>
int main()
{
int n;
printf("enter the number of times you want the loop to run \t");
scanf("%d",&n);
float a,b;
    for(a=1;a<=n;a++)
    {
    for(b=1;b<=n;b++)
    {
    if(b/a==1)
    {
    printf("1");
    }
    else
    {
    printf("0");
    }
    }
    printf("\n");
    }

}
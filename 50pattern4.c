#include<stdio.h>
int main()
{
int a,i,n;
char c;
printf("enter the number of time you want the loop to run \t");
scanf("%d",&n);
    for(int a=65;a<=n;a++)//n should be greater than 65
    {
    for(int i=65;i<=a;i++)
    {
    printf("%c",c=a);
    }
    printf("\n");
    }
return 0;
}
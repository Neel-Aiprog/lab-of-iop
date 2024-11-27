#include<stdio.h>
int main()
{
int a,b,n;
char c;
printf("enter the number of time you want the loop to run \t");
scanf("%d",&n);// n should be greater than 65
    for(int a=65;a<n;a++)
    {
    for(int b=65;b<=a;b++)
    {
    printf("%c",c=b);
    }
    printf("\n");
    }
}
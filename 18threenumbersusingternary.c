#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter three numbers \t");
scanf("%d %d %d",&a,&b,&c);
(a>b)?((a>c)?printf("number 1 is greatest"):printf("number 3 is greatest")):((b>c)?printf("number 2 is greatest"):printf("number 3 is greatest"));
return 0;
}
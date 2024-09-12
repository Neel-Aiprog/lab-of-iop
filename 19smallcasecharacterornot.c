#include<stdio.h>
int main()
{
char c;
int a;
printf("enter your character \t");
scanf("%c",&c);
((a=c)>=95)?printf("your character is  a small case charcter"):printf("your character is not a small case character");
return 0;
}
#include<stdio.h>
int main()
{
/*range of small case characters=97-122
range of upper case characters=65-90
range of digits=0-255
range of special case characters*/
int a;
char c;
printf("enter your character \t");
scanf("%c",&c);
a=c;
 if(a>=97&&a<=122)
{
printf("character is a small case character");
}
else if(a>=65&&a<=90)
{
printf("character is a upper case character");
}
else if(a>=0&&a<=255)
{
printf("number is a digit");
}
else if((a>=32&&a<=47)||
        (a>=58&&a<=64)||
        (a>=91&&a<=96)||
        (a>=123&&a<=126)){
printf("number is a special case character");
}
return 0;
}

#include<stdio.h>
int main()
{
int g,b,h,o; // gross salary=basic salary+HRA+other allowances
printf("Enter basic salary \t");
scanf("%d",&b);
printf("Enter HRA \t",&h);
scanf("%d",&h);
printf("Enter other allowances \t");
scanf("%d",&o);
printf("The calculated gross salary is %d",b+h+o);
return 0;
}
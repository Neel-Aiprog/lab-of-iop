#include<stdio.h>
int main()
{
int p,c,m,e,b;
printf("Enter marks obtained in physics \t");
scanf("%d",&p);
printf("Enter the marks obtained in chemistry \t");
scanf("%d",&c);
printf("Enter marks obtained in maths \t");
scanf("%d",&m);
printf("Enter the marks obtained in English \t");
scanf("%d",&e);
printf("Enter the marks obtained in Biology \t");
scanf("%d",&b);
printf("The total marks obtained by the student is %d \n",p+c+m+e+b);
printf("The percentage obtained by the student in the exam is %f \n",(((p+c+m+e+b)/500.0*100.0)));
return 0;    
}
#include<stdio.h>
int main()
{
float c,p,m,h,e; /*here c---> cutoff
                      m--->maths
                      p--->physics
                      h--->chemistry 
                      e--->entrance exam*/
printf("Enter marks obtained by student in maths out of 200  \t");
scanf("%f",&m);
printf("Enter marks obtained by student in physics out of 200  \t");
scanf("%f",&p);
printf("Enter marks obtained by student in chemistry out of 200 \t");
scanf("%f",&h);
printf("Enter marks obtained by student in entrance exam out of 100 \t");
scanf("%f",&e);
c=m/(2.0)+p/(2.0)+h/(2.0)+e;
printf("The cutoff marks obtained by the student is %f",c);
return 0;
}
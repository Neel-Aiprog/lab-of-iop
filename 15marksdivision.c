#include<stdio.h>
int main()
{
float p,c,m,e,b;
printf("Enter marks obtained by student in physics out of 100  \t");
scanf("%f",&p);
printf("Enter marks obtained by student in chemistry out of 100  \t");
scanf("%f",&c);
printf("Enter marks obtained by student in maths out of 100  \t");
scanf("%f",&m);
printf("Enter marks obtained by student in english out of 100  \t");
scanf("%f",&e);
printf("Enter marks obtained by student in biology out of 100  \t");
scanf("%f",&b);
printf("The average marks obtained by the student out of 500 is %f",(p+c+m+e+b)/(5.0));
return 0;
}
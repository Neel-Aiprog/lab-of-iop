#include <stdio.h>
int main()
{
float c,f;
printf("Enter the temperature in farenheit \t");
scanf("%f",&f);
c=(5.0/9.0)*(f-32);
printf("The temperature in celsius is %f",c);
return 0;
}
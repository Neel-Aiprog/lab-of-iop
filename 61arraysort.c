#include<stdio.h>
int main()
{
int i,j,temp;
int a[10];
printf("enter the elements in a: \t");
for(int i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
printf("the elements in a are \t");
for(int i=0;i<10;i++)
{
printf("%d \t",a[i]);
}
for(int i=0;i<10;i++)
{
for(int j=0;j<10-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("\nthe sorted array is:");
for(int i=0;i<10;i++)
{
printf("%d\t",a[i]);
}
}
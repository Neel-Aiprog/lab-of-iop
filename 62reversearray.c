#include<stdio.h>
int main()
{
int a[10],b[10],i=0;
printf("enter the array elements\t");
for(int i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<10;i++)
{
printf("%d\t",a[i]);
}
for(int j=9,i=0;j>=0;i++,j--)
{
b[j]=a[i];
}
printf("\n the reverse array is:\n ");
for(int j=0;j<10;j++)
{
printf("%d\t",b[j]);
}


}
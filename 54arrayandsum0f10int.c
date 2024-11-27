#include<stdio.h>
int main()
{
int a[10],sum=0;
int i;
printf("enter elements you want to store in array \t");
    for(int i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++)
    {
    printf("%d,",a[i]);
    }
    for(int i=0;i<10;i++)
    {
    sum=sum+a[i];
    }
printf("\n %d",sum);
}
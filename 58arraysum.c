#include<stdio.h>
int main()
{
int i;
int a[10],b[10],sum[10];
printf("enter the elements to be stored in a\t");
    for(int i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
printf("enter the elements to be stored in b\t");
    for(int i=0;i<10;i++)
    {
    scanf("%d",&b[i]);
    }
    for(int i=0;i<10;i++)
    {
    sum[i]=a[i]+b[i];
    }
printf("\nthe sum matrix is : \t");
    for(int i=0;i<10;i++)
    {
    printf("\n%d\t",sum[i]);
    }
}
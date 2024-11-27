#include<stdio.h>
int main()
{
int a[10],countp=0,countn=0,countzero=0;
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
    if(a[i]>0)
    {
    countp++;
    }
    if(a[i]<0)
    {
    countn++;
    }
    if(a[i]==0)
    {
    countzero++;
    }
    }
printf("\n the total positive,negative and zero elements in array is %d,%d and %d",countp,countn,countzero);
}
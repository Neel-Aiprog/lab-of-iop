#include<stdio.h>
int main()
{
int a[10],count1=0,count2=0;
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
    if(a[i]%2==0)
    {
    count1++;
    }
    else
    {
    count2++;
    }   
    }
printf("\nthe total odd and even elements is %d and %d",count1,count2);
}
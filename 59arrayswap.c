#include<stdio.h>
int main()
{
int a[10],b[10],temp;
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
    temp=a[i];
    a[i]=b[i];
    b[i]=temp;
    }
printf("the swapped arrays are:\n");
    for(int i=0;i<10;i++)
    {
    printf("\t%d",a[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
    printf("\t%d",b[i]);
    }
}
#include<stdio.h>
int main()
{
int a[10],temp,b[10],temp1;
printf("enter your array elements\t");
    for(int i=0;i<10;i++)
    {
    scanf("%d",&a[i]);
    }
    for(int i=0;i<10;i++)
    {
      for(int j=0;j<10-i;j++)
        {
        if(a[j]<a[j+1])
        {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        }
        }
    }
    for(int i=0;i<10;i++)
    {
        printf("\n%d\t",a[i]);
    }
    for(int j=9,i=0;j>=0;i++,j--)
    {
        b[j]=a[i];
    }
    for(int i=0;i<10;i++)
    {
        printf("\n%d\t",b[i]);
        
    }
}
#include<stdio.h>
int main()
{
int n;
int i;
int a[i],max,secondmax,temp;
printf("enter the number of elements you want to store in array \t");
scanf("%d",&n);
printf("enter elements \t");
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
    printf("%d,",a[i]);
    }
    max=a[0];
    for(int i=1;i<n;i++)    
    {
    if(a[i]>a[i-1])
    {
    max=a[i];
    secondmax=a[i-1];
    }
    else
    {
    secondmax=a[i];
    max=a[i-1];
    }
    }     
printf("the max and second max are %d and %d",max,secondmax);
}

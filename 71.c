#include<stdio.h>
int main()
{
int a[5],temp,b[5],c;
printf("enter your array elements\t");

for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
// now the rotated array is:
        for(int i=0;i<5;i++)
        {
        b[i]=a[i+1];
        }
b[4]=a[0];
    
printf("the rotated array is :");
for(int i=0;i<5;i++)
    {
        printf("%d\t",b[i]);
    }

for(int i=0;i<5;i++)
    {
        if(a[i]>a[i+1])
      {
        temp=a[i];
        a[i]=a[i+1];
        a[i+1]=temp;
      }   
        
    }

}
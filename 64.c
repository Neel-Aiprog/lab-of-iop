#include<stdio.h>
int main()
{
int a[3][3],sum=0,sum1=0,sum2=0,j;
printf("enter the elements of the matrix\t");
for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            {
             scanf("%d",&a[i][j]);
            }
    }
for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            {
             printf("%d\t",a[i][j]);
            }
    }
for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            {
             sum=sum+a[i][j];
              
            }
        if(i==1)
        {
        break;
        }
        printf("\nthe sum of first row elements is %d",sum);
            
    }
for(int i=1;i<3;i++)
    {
           for(int j=0;j<3;j++)
            {
             sum1=sum1+a[i][j];  
            }
            if(i==2)
            {
                break;
            }
            printf("\nthe sum of second row elements is %d",sum1);
            
    }

for(int i=2;i<=3;i++)
    {
           for(int j=0;j<3;j++)
            {
             sum2=sum2+a[i][j];
             }
             
             if(i==3)
             {
            break;
             }
             printf("\nthe sum of third row elements is %d",sum2);
    }   
                
    
}
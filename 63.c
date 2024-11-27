#include<stdio.h>
int main()
{
int a[3][3],max,minimum;
printf("enter your elements you want to store in 3 cross 3 matrix\t");
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
    printf("\n");
    }
max=a[0][0];
minimum=a[0][0];
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
        {
        if(a[i][j]>max)
        {
        max=a[i][j];
        }
        if(a[i][j]<minimum)
        {
        minimum=a[i][j];
        }
        }
}
    printf("the max and min elements are %d and %d",max,minimum);

}  
    

#include<stdio.h>
int main()
{
int a[3][3],b[3][3],sum[3][3];
printf("enter your elements in a \t");
for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
printf("the elements in a\t");
for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
                {
                    printf("%d\t",a[i][j]);
                }
                    printf("\n");
    }
printf("enter your elements in b \t");
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                {
                scanf("%d",&b[i][j]);
                }
        }
printf("the elements in b\t");
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                {
                printf("%d\t",b[i][j]);
                }
                printf("\n");
        }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            {
                sum[i][j]=a[i][j]+b[i][j];
            }
    }
printf("summation is :");
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                {
                    printf("%d\t",sum[i][j]);
                }
                    printf("\n");
        }
}
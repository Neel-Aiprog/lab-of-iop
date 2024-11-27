#include<stdio.h>
int main()
{
int r,c;
printf("enter your rows and cols\t");
scanf("%d%d",&r,&c);
int a[r][c],b[r][c],mult[r][c];
printf("enter your a matrix values \t");
for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
    }
printf("enter your b matrix values \t");
for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            {
                scanf("%d",&b[i][j]);
            }
    }
for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            {
                mult[i][j]=0;
                for(int k=0;k<r;k++)
                    
                    {
                        mult[i][j]=mult[i][j]+a[i][k]*b[k][j];
                    }
            }
    }
for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            {
                printf("%d\t",mult[i][j]);
            }
            printf("\n");
    }
}
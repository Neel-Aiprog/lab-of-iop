#include<stdio.h>
int main()
{
int i,j;
int a[3][3],d[3][3];
printf("enter the elements in your a \t");
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
d[i][j]=0;
d[i][j]=d[i][j]+a[j][i];
}
}
printf("the transpose of matrix is \t \n");
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++)
{
printf("\t %d",d[i][j]);
}
printf("\n");
}
}
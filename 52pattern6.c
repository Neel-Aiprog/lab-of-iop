#include<stdio.h>
int main()
{
int n,m,j;
printf("enter uptil how many times you want the loop to repeat \t");
scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
    for(int m=i-1;m>=1;m--)
        {
            printf("%d",m);
        }
            printf("\n");
}
}
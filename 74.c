#include<stdio.h>
int main()
{
int a[4],b[4],c[8],temp;
printf("enter your elements in a\t");
for(int i=0;i<4;i++)
        {
          scanf("%d",&a[i]);  
        }      
printf("enter your elements in b\t");
for(int i=0;i<4;i++)
        {
          scanf("%d",&b[i]);  
        } 
for(int i=0;i<4;i++)
        {
          c[i]=a[i];
        }
for(int i=4,j=0;i<8&&j<4;i++,j++)
        {
          c[i]=b[j];
        }
for(int i=0;i<8;i++)
{
printf("%d",c[i]);
}

for(int i=0;i<8;i++)
        {
for(int j=0;j<7-i;j++)
        {
                if(c[j]>c[j+1])
                {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
                }
        }
        }
printf("\n");
for(int i=0;i<8;i++)
{
printf("%d\t",c[i]);
}

}
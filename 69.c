#include<stdio.h>
int main()
{
int a[10],searche,index;
printf("enter the array elements\t");
for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
printf("enter the element you want to search in given array \t");
scanf("%d",&searche);
for(int i=0,index=0;i<10;i++,index++)
    {
        if(searche==a[i])
            {
            printf("the search element is present in the array and is present in the index position %d",index);
            break;   
            }
       

    }
    

}
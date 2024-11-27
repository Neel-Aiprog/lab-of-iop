#include<stdio.h>
int main()
{
    int a[10],num, pos = 0;
    printf("enter the elements in array\t");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element \t");
    scanf("%d",&num);
    for(int i=0;i<10;i++)
    {
        if(num==a[i])
        {
        pos++;
        }
    
    }
    
    printf("your element %d has occured %d times in array",num,pos);
}

#include <stdio.h>
int maximum(int a);
int main()
{
    int maximum1, i,a;
     printf("enter your array elements \t");
    scanf("%d",&a);
    maximum(a);
}
int maximum(int a)
{   
    int maximum1,b[10];
    b[0]=a;
    for (int i = 1; i < 10; i++)
    {
        scanf("%d", &b[i]);
    }
    maximum1 = a;
    for (int i = 0; i < 10; i++)
    {
        if (b[i] > maximum1)
        {
            maximum1 = b[i];
        }
    }
    printf("the maximum element among the given elements is %d", maximum1);
}
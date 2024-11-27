#include <stdio.h>
int main()
{
    int n, max;
    printf("enter the number of integers(it should be greater than 1)\t");
    scanf("%d", &n);
    int a[n], *cptr;
    cptr = &a[0];
    printf("enter the integers\t");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", cptr);
        cptr++;
    }
    max = a[0];
    cptr = &a[0];
    
    for (int i = 0; i < n; i++)
{
        if (*cptr > max)
        {
            max = *cptr;
        }
        cptr++;
    }
    printf("max among the given numbers is %d", max);
}
#include <stdio.h>
#include <string.h>
int main()
{
    int a[10], b[10], *ptr1, *ptr2, num, temp;
    ptr1 = &a[0];
    ptr2 = &b[0];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (ptr1));
        ptr1++;
    }
    ptr1 = &a[0];
    printf("enter your number\t");
    scanf("%d", &num);
    for (int i = 0; i < 10; i++)
    {
        if (num == a[i])
        {
            a[i] = num;
            ptr1 = &a[i];
            break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", (ptr2));
        ptr2++;
    }
    printf("\nhere is the second array\t");
    ptr2 = &b[0];
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", *(ptr2 + i));
    }
    printf("\nsecond array after copying\t");
    b[1] = *ptr1;
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", *(ptr2 + i));
    }
}
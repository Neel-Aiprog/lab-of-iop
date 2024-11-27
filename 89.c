#include <stdio.h>
int main()
{
    int a[10], b[10], *ptr1, *ptr2;
    ptr1 = &a[0];
    ptr2 = &b[0];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", ptr1);
        ptr1++;
    }
    printf("========================");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", ptr2);
        ptr2++;
    }
    ptr1 = &a[0];
    ptr2 = &b[0];
    for (int i = 0; i < 10; i++)
    {
        *(ptr2 + i) = *(ptr1 + i);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d", *(ptr2 + i));
    }
}
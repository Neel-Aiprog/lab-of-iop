#include <stdio.h>
int main()
{
    int n, a[5];
    printf("enter the number of times you want to rotate the array \t");
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = n + 1; i < 5; i++)
    {
        a[i] = a[i - n];
    }
    a[n - 1] = a[n - 2];
    a[4] = a[n - 2];
    for (int i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
    }
}

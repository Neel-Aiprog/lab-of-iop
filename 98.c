#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a[10], *b[10], *c[10];
    for (int i = 0; i < 3; i++)
    {
        a[i] = (int *)malloc(3 * sizeof(int));
        b[i] = (int *)malloc(3 * sizeof(int));
        c[i] = (int *)malloc(3 * sizeof(int));
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", (*(a + i) + j));
        }
    }
    printf("heres the 1st matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(a + i) + j));
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", (*(b + i) + j));
        }
    }
    printf("\nheres the 2nd matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(b + i) + j));
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            *(*(c + i) + j) = 0;
            for (int k = 0; k < 3; k++)
            {
                *(*(c + i) + j) = *(*(c + i) + j) + *(*(a + i) + k) * (*(*(b + k) + j));
            }
        }
    }
    printf("heres the resultant matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", *(*(c + i) + j));
        }
        printf("\n");
    }
}
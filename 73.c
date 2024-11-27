#include <stdio.h>
int main()
{
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count = 0, a[10];
    printf("cast the votes\t");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 1)
        {
            count1++;
        }
        if (a[i] == 2)
        {
            count2++;
        }
        if (a[i] == 3)
        {
            count3++;
        }
        if (a[i] == 4)
        {
            count4++;
        }
        if (a[i] == 5)
        {
            count5++;
        }
        if (a[i] > 5)
        {
            count++;
        }
    }
    printf("\nthe votes casted for candidate 1 is %d", count1);
    printf("\nthe votes casted for candidate 2 is %d", count2);
    printf("\nthe votes casted for candidate 3 is %d", count3);
    printf("\nthe votes casted for candidate 4 is %d", count4);
    printf("\nthe votes casted for candidate 5 is %d", count5);
    printf("\nthe spoilt votes are  %d", count);
}
#include <stdio.h>
int evenorodd(int a);
int main()
{
    int a;
    printf("enter your number \t");
    scanf("%d", &a);
    evenorodd(a);
}
int evenorodd(int a)
{
    if (a % 2 == 0)
    {
        printf("%d is even", a);
    }
    else
    {
        printf("%d is odd", a);
    }
}
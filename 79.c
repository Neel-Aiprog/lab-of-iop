#include <stdio.h>
int exchange(int a, int b);
int main()
{
    int a, b;
    printf("enter the two numbers \t");
    scanf("%d%d", &a, &b);
    exchange(a, b);
}
int exchange(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d and %d", a, b);
}
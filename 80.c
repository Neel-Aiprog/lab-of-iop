#include <stdio.h>
int fibonacci(int n);
int main()
{
    int n;
    printf("enter the number upto which you want fibonacci series \t");
    scanf("%d", &n);
    fibonacci(n);
}
int fibonacci(int n)
{
    int a = 0, b = 1, c;
    printf("%d\t", a);
    printf("%d\t", b);
    for (int c = 0; c < n; c++)
    {
        c = a + b;
        if (c < n)
        {
            printf("%d\t", c);
        }
        a = b;
        b = c;
    }
}

#include <stdio.h>
int factorial(int n);
int main()
{
    int n;
    printf("enter the number you want the factorial of \t");
    scanf("%d", &n);
    factorial(n);
}
int factorial(int n)
{
    int mult = 1;
    while (n > 0)
    {
        mult = mult * n;
        n--;
    }
    printf("%d", mult);
}
#include <stdio.h>
int p(int a);
int main()
{
    int a;
    printf("enter your three digit number or two digit number \t");
    scanf("%d", &a);
    p(a);
}
int p(int a)
{
    int temp, sum = 0, q, sum1 = 0, sum2 = 0, sum3;
    temp = a;
    while (a > 0 && a > 100)
    {
        q = a % 10;
        sum2 = sum2 + (q * 100);
        a = a / 10;
    }
    while (a > 0 && a > 10)
    {
        q = a % 10;
        sum1 = sum1 + (q * 10);
        a = a / 10;
    }
    while (a > 0 && a < 10)
    {
        q = a % 10;
        sum = sum + q;
        a = a / 10;
    }
    sum3 = sum + sum1 + sum2;
    if (sum3 == temp)
    {
        printf("number is palindrome");
    }
    else
    {
        printf("number is not a palindrome");
    }
}
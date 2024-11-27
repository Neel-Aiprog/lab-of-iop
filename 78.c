#include <stdio.h>
int armstrong(int a);
int main()
{
    int a;
    printf("enter your number \t");
    scanf("%d", &a);
    armstrong(a);
}
int armstrong(int a)
{
    int sum = 0, temp, q;
    temp = a;
    while (a > 0)
    {
        q = a % 10;
        sum = sum + (q * q * q);
        a = a / 10;
    }
    if (sum == temp)
    {
        printf("number is a armstrong number");
    }
    else
    {
        printf("number is not a armstrong number");
    }
}
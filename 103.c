#include <stdio.h>
int a, b;
#define big(a, b) (a > b ? a : b)
int main()
{
    int a, b, largest;
    printf("enter your two numbers\t");
    scanf("%d%d", &a, &b);
    largest = big(a, b);
    printf("largest number is %d", largest);
}

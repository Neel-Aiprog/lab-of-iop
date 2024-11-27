#include <stdio.h>
int main()
{
    int a, *aptr, s, c;
    aptr = &a;
    printf("enter number\t");
    scanf("%d", &a);
    c = (*aptr) * (*aptr) * (*aptr);
    s = (*aptr) * (*aptr);
    printf("square=%d", s);
    printf("\ncube=%d", c);
}
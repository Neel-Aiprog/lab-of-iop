#include <stdio.h>
int main()
{
    int x = 10, *ptr;
    ptr = &x;
    printf("original value----%d", x);
    *ptr = 20;
    printf("\nnow value----%d", x);
}
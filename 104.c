#include <stdio.h>
int main()
{
    enum
    {
        red,
        blue,
        orange,
        yellow,
        purple
    };
    char ch;
    printf("enter which colour's hexadecimal code you want\t");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'r':
        printf("%hx", red);
    case 'o':
        printf("%hx", orange);
    case 'b':
        printf("%hx", blue);
    case 'y':
        printf("%hx", yellow);
    case 'p':
        printf("%hx", purple);
    }
}
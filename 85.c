#include <stdio.h>
int vowel(int a);
int main()
{
    int a;
    vowel(a);
}
int vowel(int a)
{
    char c;
    printf("enter your character \t");
    scanf("%c", &c);
    a = c;
    switch (a)
    {
    case 97:
        printf("vowel");
        break;
    case 65:
        printf("vowel");
        break;
    case 101:
        printf("vowel");
        break;
    case 69:
        printf("vowel");
        break;
    case 105:
        printf("vowel");
        break;
    case 73:
        printf("vowel");
        break;
    case 111:
        printf("vowel");
        break;
    case 79:
        printf("vowel");
        break;
    case 117:
        printf("vowel");
        break;
    case 85:
        printf("vowel");
        break;
    default:
        printf("not a vowel");
        break;
    }
}
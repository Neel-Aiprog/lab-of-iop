#include <stdio.h>
#include <ctype.h>
int main()
{
    int count = 0;
    FILE *fptr;
    fptr = fopen("D:\\student.txt", "r");
    while (!feof(fptr))
    {
        char ch;
        ch = getc(fptr);
        switch (tolower(ch))
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            count++;
            break;
        }
    }
    printf("vowel count:%d", count);
    fclose(fptr);
}
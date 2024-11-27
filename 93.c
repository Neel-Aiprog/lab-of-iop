#include <stdio.h>
#include <string.h>
int main()
{
    char text[40], *tptr, wcount = 0;
    tptr = &text[0];
    gets(text);
    int l = strlen(text);
    for (int i = 0; i < l; i++)
    {
        if (*tptr == ' ')
        {
            wcount++;
        }
        tptr++;
    }
    printf("%d", wcount + 1);
}
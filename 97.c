#include <stdio.h>
#include <string.h>
int main()
{
    char msg[100], *mptr;
    int l = strlen(msg), vcount = 0;
    mptr = &msg[0];
    gets(msg);
    while (*mptr != '\0')
    {
        switch (*mptr)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        {
            vcount++;
        }
        }
        mptr++;
    }
    printf("%d", vcount);
}
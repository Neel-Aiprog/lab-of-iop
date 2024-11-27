#include <stdio.h>
#include <string.h>
int main()
{
    char msg[100], *ptr;
    int i = 0, scount = 0, wcount = 0;
    ptr = &msg[0];
    gets(msg);
    int l = strlen(msg);
    for (i = 0; i < l; i++)
    {
        if (*(ptr + i) == ' ')
        {
            scount++;
        }
        else
        {
            wcount++;
        }
    }
    printf("%d,%d", scount, wcount+scount);
}
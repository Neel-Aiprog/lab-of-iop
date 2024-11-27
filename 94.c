#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int size = sizeof(int);
    char char1[40], char2[40], *cptr, *c1ptr, temp;
    cptr = &char1[0];
    fgets(char1, 40, stdin);
    int l = strlen(char1);
    for (int i = 0, j = l - 1; i < l / 2; i++, j--)
    {
        temp = *(cptr + j * sizeof(char));
        *(cptr + j * sizeof(char)) = *(cptr + i * sizeof(char));
        *(cptr + i * sizeof(char)) = temp;
    }
    puts(char1);
}

#include <stdio.h>
#include <string.h>
int length(int a);
int main()
{
    int a;
    length(a);
}
int length(int a)
{
    int d, count = 0, scount = 0, i = 0;
    printf("enter your line \t");
    char line[100];
    gets(line);
    while (i < 100)
    {
        if (line[i] != '\0')
        {
            count++;
        }
        else
        {
            break;
        }
        i++;
    }
    printf("\n length of line is %d", count);
}
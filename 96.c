#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *sname[10], *temp;
    printf("enter student names\t");
    for (int i = 0; i < 5; i++)
    {
        sname[i] = (char *)malloc(20 * sizeof(char));
    }
    for (int i = 0; i < 5; i++)
    {
        gets(sname[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (strcmp(sname[i], sname[j]) > 0)
            {
                temp = sname[i];
                sname[i] = sname[j];
                sname[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        puts(sname[i]);
    }
}
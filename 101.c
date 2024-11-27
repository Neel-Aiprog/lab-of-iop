#include <stdio.h>
#include <ctype.h>
int main()
{
    char data[100];
    FILE *fptr;
    fptr = fopen("D:\\student.txt", "a");
    fgets(data, sizeof(data), stdin);
    fprintf(fptr, "%s", data);
    fclose(fptr);
}
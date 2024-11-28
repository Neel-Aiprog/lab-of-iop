#include <stdio.h>
#include <string.h>
void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
void generatePermutations(char *msg, int s, int e)
{
    if (s == e)
    {
        printf("%s\n", msg);
    }
    else
    {
        for (int i = s; i <= e; i++)
        {
            swap((msg + s), (msg + i));
            generatePermutations(msg, s + 1, e);
            swap((msg + s), msg + i);
        }
    }
}
int main()
{
    char msg[10];
    printf("Enter string that you want permutations of\t ");
    scanf("%s", msg);

    int n = strlen(msg);
    printf("The permutations of the string are:\t");
    generatePermutations(msg, 0, n - 1);

    return 0;
}

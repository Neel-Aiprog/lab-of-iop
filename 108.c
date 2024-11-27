#include <stdio.h>
int main()
{
    int i = 0, count = 0, j = 0, count1 = 0, temp;
    char st1[10], st2[10], st[20];
    printf("enter the 1st string\t");
    scanf("%s", st1);
    printf("enter the second string\t");
    scanf("%s", st2);
    while (st1[j] != '\0')
    {
        st[i] = st1[j];
        i++;
        j++;
    }
    st[i] = '\0';
    printf("\nhere is the concatenated string");
    printf("\n%s", st);
    i = 0;
    while (i < 100)
    {
        if (st1[i] != '\0')
        {
            count++;
        }
        else
        {
            break;
        }
        i++;
    }
    i = 0;
    while (i < 100)
    {
        if (st2[i] != '\0')
        {
            count1++;
        }
        else
        {
            break;
        }
        i++;
    }

    for (i = 0; i < 10; i++)
    {
        if (st1[i] > st2[i])
        {
            printf("\nstring 1 is greater than string 2");
            break;
        }
        if (st2[i] > st1[i])
        {
            printf("\nstring 2 is greater than string 1");
            break;
        }
        if (i == count)
        {
            printf("string 1  is equal to string 2");
            break;
        }
    }
    i = 0;
    while (i < 10)
    {
        st2[i] = st1[i];
        i++;
    }
    printf("\nheres the copied string\t");
    printf("\n%s", st2);
    for (i = 0, j = count - 1; i < count / 2; i++, j--)
    {
        temp = st1[i];
        st1[i] = st1[j];
        st1[j] = temp;
    }
    printf("heres the reverse string\t");
    printf("\n%s", st1);
}

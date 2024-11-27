#include <stdio.h>
int info(int book);
int main()
{
    int book;
    /*we will get the info on book in the following order
    the name of author
    the year it was written in
    number of copies sold*/
    info(book);
}
int info(int book)
{
    int year, copies;
    printf("enter the year it was written in \t");
    scanf("%d", &year);
    printf("enter the no of copies sold\t");
    scanf("%d", &copies);
    printf("enter your name of author\t");
    char name[80];
    scanf("%s", name);
    printf("\nauthor:%s", name);
    printf("\nyear:%d", year);
    printf("\ncopies:%d", copies);
}
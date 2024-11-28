#include <stdio.h>
#include <ctype.h>
int main()
{
    char name[100];
    int roll_no;
    int marks;
    printf("we are gonna create a file that will store contents in it ");
    int i = 0, n;
    printf("\nenter the number of students\t");
    scanf("%d", &n);

    FILE *fptr;
    fptr = fopen("D:\\info.txt", "r+");
    for (i = 0; i < n; i++)
    {
        printf("enter roll no\n");
        scanf("%d", &roll_no);
        printf("enter name \t\n");
        scanf("%s", name);
        printf("enter marks\t\n");
        scanf("%d", &marks);
        fprintf(fptr, "rollno:%d\n", roll_no);
        fprintf(fptr, "name:%s\n", name);
        fprintf(fptr, "marks:%d\n", marks);
    }
    fclose(fptr);
}

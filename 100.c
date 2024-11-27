#include <stdio.h>
#include <ctype.h>
int main()
{   
    char name[100];
    int roll_no;
    int marks;
    printf("we are gonna create a file that will store contents in it ");
    int i = 0, n;

    FILE *fptr;
    fptr = fopen("D:\\info.txt", "r+");
        fgets(name, sizeof(name), stdin);
        fprintf(fptr, "%s", name);
        fscanf(fptr,"%d",&marks);
        fprintf(fptr, "%d", marks);
        fscanf(fptr,"%d",&roll_no);
        fprintf(fptr, "%d", roll_no);
    
}
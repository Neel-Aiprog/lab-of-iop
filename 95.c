#include <stdio.h>
struct employee
{
    char name[50];
    int number[50];
    int salary[50];
};
int main()
{
    struct employee nice;
    printf("this program contains all the details of employees");
    int num;
    printf("\nhow many employee details do you want ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%s", &nice.name[i]);
        scanf("\n%d", &nice.number[i]);
        scanf("\n%d", &nice.salary[i]);
    }
    for (int i = 0; i < num; i++)
    {
        printf("\nemplpyee number is %d and basic pay is %d", nice.number[i], nice.salary[i]);
    }
}
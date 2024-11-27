#include <stdio.h>
struct item
{
    char item_name[40];
    int quantity;
    int price;
    float amount;
} p1;
void out(int b, int c);
int main()
{
    printf("Enter the item name\t");
    scanf("%s", p1.item_name);
    printf("\nenter the quantity\t");
    scanf("%d", &p1.quantity);
    printf("\nenter the price\t");
    scanf("%d", &p1.price);
    out(p1.quantity, p1.price);
}
void out(int b, int c)
{
    int d = p1.quantity;
    int f = p1.price;
    int g = p1.amount;
    g = d * f;
    printf(" the final price is %d", g);
}
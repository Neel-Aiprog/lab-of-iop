#include <stdio.h>
void flip(int num, int N);
int main()
{
   int num, n = 0, num1, q, i, d;
   printf("enter your number\t");
   scanf("%d", &num);
   int N;
   printf("\nenter from where you want to reverse\t");
   scanf("%d", &N);
   flip(num, N);
}
void flip(int num, int N)
{
   int n = 0, num1, q, i, d;
   d = num;
   num1 = num;
   while (num > 0)
   {
      num = num / 10;
      n++;
   }
   int a[n], b[n];
   i = n - 1;
   while (num1 > 0)
   {
      q = num1 % 10;
      a[i] = q;
      num1 = num1 / 10;
      i--;
   }
   for (i = N; i < n; i++)
   {
      b[i - N] = a[i];
   }
   for (i = N; i < n; i++)
   {
      a[i] = b[n - i - 1];
   }
   for (int i = 0; i < n; i++)
   {
      printf("%d", a[i]);
   }
}
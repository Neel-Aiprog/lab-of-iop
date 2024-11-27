#include <stdio.h>
#include <ctype.h>
int main()
{
   int wcount = 0, ccount = 0, lcount = 0;
   FILE *fptr;
   fptr = fopen("D:\\student.txt", "r");
   char ch;
   while (!feof(fptr))
   {
      ch = getc(fptr);
      if (toupper(ch) || tolower(ch) || ch == ' ')
      {
         ccount++;
      }
      if (ch == ' ' || ch == '\n')
      {
         wcount++;
      }
      if (ch == '\n')
      {
         lcount++;
      }
   }
   printf("words:%d&&lines:%d&&ccount:%d", wcount + 1, lcount + 1, ccount);
}
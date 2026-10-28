/* Exercise 3.33: Hollow Rectangle of Plus Symbols */
#include <stdio.h>

int main(void)
{
   int length;
   int breadth;
   int row;
   int column;

   printf("Enter the length (number of rows): ");
   scanf("%d", &length);

   printf("Enter the breadth (number of columns): ");
   scanf("%d", &breadth);

   printf("\n");

   /* 最上面那一列：整排都是 + */
   column = 1;
   while (column <= breadth) {
      printf("+");
      column = column + 1;
   }
   printf("\n");

   /* 中間的列：只有最左和最右有 +，中間留空 */
   row = 2;
   while (row <= length - 1) {
      printf("+");

      column = 2;
      while (column <= breadth - 1) {
         printf(" ");
         column = column + 1;
      }

      printf("+\n");
      row = row + 1;
   }

   /* 最下面那一列：整排都是 +（length 為 1 時不需要再印一次） */
   if (length > 1) {
      column = 1;
      while (column <= breadth) {
         printf("+");
         column = column + 1;
      }
      printf("\n");
   }

   return 0;
}

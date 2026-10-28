/* Exercise 4.31: Diamond-Printing Program */
#include <stdio.h>

int main(void)
{
   int row;
   int column;

   /* 上半部（含最寬那一列）：星號數為 1, 3, 5, 7, 9 */
   for (row = 1; row <= 5; row++) {
      for (column = 1; column <= 5 - row; column++) {
         printf(" ");
      }
      for (column = 1; column <= 2 * row - 1; column++) {
         printf("*");
      }
      printf("\n");
   }

   /* 下半部：星號數為 7, 5, 3, 1 */
   for (row = 4; row >= 1; row--) {
      for (column = 1; column <= 5 - row; column++) {
         printf(" ");
      }
      for (column = 1; column <= 2 * row - 1; column++) {
         printf("*");
      }
      printf("\n");
   }

   return 0;
}

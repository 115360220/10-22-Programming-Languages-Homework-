/* Exercise 4.16: Triangle-Printing Program */
#include <stdio.h>

int main(void)
{
   int row;
   int column;

   /* (A) 左邊對齊，星號由少到多 */
   printf("(A)\n");
   for (row = 1; row <= 10; row++) {
      for (column = 1; column <= row; column++) {
         printf("%s", "*");
      }
      printf("\n");
   }

   printf("\n");

   /* (B) 左邊對齊，星號由多到少 */
   printf("(B)\n");
   for (row = 10; row >= 1; row--) {
      for (column = 1; column <= row; column++) {
         printf("%s", "*");
      }
      printf("\n");
   }

   printf("\n");

   /* (C) 右邊對齊，星號由多到少（前面補空白） */
   printf("(C)\n");
   for (row = 10; row >= 1; row--) {
      for (column = 1; column <= 10 - row; column++) {
         printf("%s", " ");
      }
      for (column = 1; column <= row; column++) {
         printf("%s", "*");
      }
      printf("\n");
   }

   printf("\n");

   /* (D) 右邊對齊，星號由少到多（前面補空白） */
   printf("(D)\n");
   for (row = 1; row <= 10; row++) {
      for (column = 1; column <= 10 - row; column++) {
         printf("%s", " ");
      }
      for (column = 1; column <= row; column++) {
         printf("%s", "*");
      }
      printf("\n");
   }

   return 0;
}

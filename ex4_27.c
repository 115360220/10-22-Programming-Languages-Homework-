/* Exercise 4.27: Pythagorean Triples */
#include <stdio.h>

int main(void)
{
   int side1;
   int side2;
   int hypotenuse;
   int count = 0;

   printf("side1  side2  hypotenuse\n");

   /* 三層巢狀迴圈，暴力試過所有組合
      side2 從 side1 開始、hypotenuse 從 side2 開始，
      可以避免印出同一組的重複排列（例如 3-4-5 和 4-3-5） */
   for (side1 = 1; side1 <= 500; side1++) {
      for (side2 = side1; side2 <= 500; side2++) {
         for (hypotenuse = side2; hypotenuse <= 500; hypotenuse++) {
            if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
               printf("%5d  %5d  %10d\n", side1, side2, hypotenuse);
               count++;
            }
         }
      }
   }

   printf("\nTotal triples found: %d\n", count);

   return 0;
}

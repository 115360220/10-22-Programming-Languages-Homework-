/* Exercise 4.15: Modified Compound-Interest Program */
#include <stdio.h>
#include <math.h>

int main(void)
{
   double principal = 5000.0;
   double rate;
   double amount;
   int rateInThousandths;   /* 100 = 10.0%, 105 = 10.5%, ... 120 = 12.0% */
   int year;

   /* 用整數控制迴圈，避免小數累加產生誤差 */
   for (rateInThousandths = 100; rateInThousandths <= 120; rateInThousandths += 5) {
      rate = rateInThousandths / 1000.0;

      printf("Interest rate: %.1f%%\n", rate * 100.0);
      printf("%4s%21s\n", "Year", "Amount on deposit");

      for (year = 1; year <= 15; year++) {
         amount = principal * pow(1.0 + rate, year);
         printf("%4d%21.2f\n", year, amount);
      }

      printf("\n");
   }

   return 0;
}

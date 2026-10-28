/* Exercise 3.20: Salary Calculator */
#include <stdio.h>

int main(void)
{
   double hours;
   double rate;
   double salary;

   printf("Enter # of hours worked (-1 to end): ");
   scanf("%lf", &hours);

   while (hours != -1.0) {
      printf("Enter hourly rate of the worker ($00.00): ");
      scanf("%lf", &rate);

      /* 前 40 小時照正常時薪，超過的部分算 1.5 倍 */
      if (hours <= 40.0) {
         salary = hours * rate;
      }
      else {
         salary = 40.0 * rate + (hours - 40.0) * rate * 1.5;
      }

      printf("Salary is $%.2f\n\n", salary);

      printf("Enter # of hours worked (-1 to end): ");
      scanf("%lf", &hours);
   }

   return 0;
}

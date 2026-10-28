/* Exercise 3.18: Sales Commission Calculator */
#include <stdio.h>

int main(void)
{
   double sales;
   double salary;

   printf("Enter sales in dollars (-1 to end): ");
   scanf("%lf", &sales);

   while (sales != -1.0) {
      salary = 200.0 + 0.09 * sales;

      printf("Salary is: $%.2f\n\n", salary);

      printf("Enter sales in dollars (-1 to end): ");
      scanf("%lf", &sales);
   }

   return 0;
}

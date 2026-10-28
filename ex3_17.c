/* Exercise 3.17: Credit Limit Calculator */
#include <stdio.h>

int main(void)
{
   int accountNumber;
   double beginningBalance;
   double totalCharges;
   double totalCredits;
   double creditLimit;
   double newBalance;

   printf("Enter account number (-1 to end): ");
   scanf("%d", &accountNumber);

   while (accountNumber != -1) {
      printf("Enter beginning balance: ");
      scanf("%lf", &beginningBalance);

      printf("Enter total charges: ");
      scanf("%lf", &totalCharges);

      printf("Enter total credits: ");
      scanf("%lf", &totalCredits);

      printf("Enter credit limit: ");
      scanf("%lf", &creditLimit);

      newBalance = beginningBalance + totalCharges - totalCredits;

      if (newBalance > creditLimit) {
         printf("Account:      %d\n", accountNumber);
         printf("Credit limit: %.2f\n", creditLimit);
         printf("Balance:      %.2f\n", newBalance);
         printf("Credit Limit Exceeded.\n");
      }

      printf("\nEnter account number (-1 to end): ");
      scanf("%d", &accountNumber);
   }

   return 0;
}

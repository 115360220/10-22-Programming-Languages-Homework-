/* Exercise 4.28: Calculating Weekly Pay */
#include <stdio.h>

int main(void)
{
   int payCode;
   double salary;
   double wage;
   double hours;
   double sales;
   double pieces;
   double payPerPiece;
   double pay;

   printf("Enter paycode (1-4, -1 to end): ");
   scanf("%d", &payCode);

   while (payCode != -1) {

      switch (payCode) {

         case 1:   /* 經理：固定週薪 */
            printf("Manager selected.\n");
            printf("Enter weekly salary: ");
            scanf("%lf", &salary);
            printf("Weekly pay is $%.2f\n", salary);
            break;

         case 2:   /* 時薪員工：前 40 小時正常，超過算 1.5 倍 */
            printf("Hourly worker selected.\n");
            printf("Enter hourly wage: ");
            scanf("%lf", &wage);
            printf("Enter hours worked: ");
            scanf("%lf", &hours);

            if (hours <= 40.0) {
               pay = hours * wage;
            }
            else {
               pay = 40.0 * wage + (hours - 40.0) * wage * 1.5;
            }

            printf("Weekly pay is $%.2f\n", pay);
            break;

         case 3:   /* 業務：$250 加上業績的 5.7% */
            printf("Commission worker selected.\n");
            printf("Enter gross weekly sales: ");
            scanf("%lf", &sales);

            pay = 250.0 + 0.057 * sales;

            printf("Weekly pay is $%.2f\n", pay);
            break;

         case 4:   /* 計件員工：件數乘以每件工資 */
            printf("Pieceworker selected.\n");
            printf("Enter number of pieces produced: ");
            scanf("%lf", &pieces);
            printf("Enter pay per piece: ");
            scanf("%lf", &payPerPiece);

            pay = pieces * payPerPiece;

            printf("Weekly pay is $%.2f\n", pay);
            break;

         default:
            printf("Invalid paycode. Please enter 1, 2, 3 or 4.\n");
            break;
      }

      printf("\nEnter paycode (1-4, -1 to end): ");
      scanf("%d", &payCode);
   }

   return 0;
}

#include <stdio.h>

int main() {
   float rice, sugar;

   printf("Enter rice price per kg: ");
   scanf("%f", &rice);
   printf("Enter sugar price per kg: ");
   scanf("%f", &sugar);

   printf("*** LIST OF ITEMS ***\n");
   printf("Item\t\tPrice\n");
   printf("Rice\t\tRs. %.2f\n", rice);
   printf("Sugar\t\tRs. %.2f\n", sugar);

   return 0;
}

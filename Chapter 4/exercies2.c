#include <stdio.h>

int main() {
   float x, y;
   float a,b,c;

   printf("Enter the values of x and y\n");
   scanf("%f%f", &x, &y);
   a = (x+y)/(x-y);
   b = (x+y)/2;
   c = (x+y)*(x-y);
   printf("Result of a: %.2f\n",a);
   printf("Result of b: %.2f\n",b);
   printf("Result of c: %.2f\n",c);

   return 0;
}

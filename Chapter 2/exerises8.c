#include <stdio.h>

int main() {
    float n1, n2;
    int sum;

    printf("Enter first number: ");
    scanf("%f", &n1);

    printf("Enter second number: ");
    scanf("%f", &n2);

    sum = (int)(n1 + n2); 
    printf("n1 = %.2f, n2 = %f, sum = %.2d", n1, n2, sum);
    return 0;
}

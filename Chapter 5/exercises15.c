#include <stdio.h>
#include <math.h>

int main() {
    double x, result;
    char ch;

    printf("Enter an angle in radians: ");
    scanf("%lf", &x);

    printf("Enter 's' or 'S' for sin(x), 'c' or 'C' for cos(x), or 't' or 'T' for tan(x): ");
    scanf(" %c", &ch); 

    if (ch == 's' || ch == 'S') {
        result = sin(x);
        printf("sin(%.2lf) = %.2lf\n", x, result);
    } else if (ch == 'c' || ch == 'C') {
        result = cos(x);
        printf("cos(%.2lf) = %.2lf\n", x, result);
    } else if (ch == 't' || ch == 'T') {
        result = tan(x);
        printf("tan(%.2lf) = %.2lf\n", x, result);
    } else {
        printf("Invalid input\n");
    }

    return 0;
}

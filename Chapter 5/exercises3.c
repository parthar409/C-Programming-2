#include <stdio.h>

int main() {
    int a, b, c, d, m, n;
    float x1, x2;

    printf("Enter the values of a, b, c, d, m, n: ");
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &m, &n);

    if (a*d - b*c == 0) {
        printf("Error: ad-cb is zero\n");
        return 1;
    }

    x1 = (n*d - b*m) / (a*d - b*c);
    x2 = (m*a - n*c) / (a*d - b*c);

    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);
    return 0;
}

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a*a + b*b == c*c)||(a*a + c*c == b*b)||(b*b + c*c == a*a)) {
        printf("Right-angled triangle\n", a, b, c);
    } else {
        printf("Not right-angled triangle\n", a, b, c);
    }

    return 0;
}


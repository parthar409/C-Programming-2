#include <stdio.h>

int main() {
    int a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    largest = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("Largest number is: %d", largest);
    return 0;
}

/*#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = (int) fmax(a, fmax(b, c));
    printf("The largest value is %d", max);
    return 0;
}*/

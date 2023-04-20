#include <stdio.h>

int main() {
    int a, b, c;
    int sum, largest, smallest;
    float average;

    printf("Enter three values: ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    printf("Sum: %d\n", sum);

    average = (float) sum / 3;
    printf("Average: %.2f\n", average);

    largest = a;
    if (b > largest) {
        largest = b;
    }
    if (c > largest) {
        largest = c;
    }
    printf("Largest: %d\n", largest);

    smallest = a;
    if (b < smallest) {
        smallest = b;
    }
    if (c < smallest) {
        smallest = c;
    }
    printf("Smallest: %d\n", smallest);
    return 0;
}

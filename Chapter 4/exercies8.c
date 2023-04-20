#include <stdio.h>

int main() {
    float value = 345.6789;
    printf("Two decimal places: %.2f\n", value);
    printf("Four decimal places: %.4f\n", value);
    printf("Zero decimal places: %.0f\n", value);
    return 0;
}

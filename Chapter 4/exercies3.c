//The program uses the'round()'function from the'math.h'library to round the given numbers to the nearest integers.

#include <stdio.h>
#include <math.h>

int main() {
    float n1 = 35.7;
    float n2 = 50.21;
    float n3 = -23.73;
    float n4 = -46.45;

    int result1 = (int) round(n1);
    int result2 = (int) round(n2);
    int result3 = (int) round(n3);
    int result4 = (int) round(n4);

    printf("Result 1: %d\n", result1);
    printf("Result 2: %d\n", result2);
    printf("Result 3: %d\n", result3);
    printf("Result 4: %d\n", result4);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    float value[4];
    int i, j, k;
    printf("Enter value:\n");
    for (i = 0; i < 4; i++) {
        scanf("%f", &value[i]);
    }
    printf("\n");
    int rounded[4];
    for (i = 0; i < 4; i++) {
        rounded[i] = (int)round(value[i]);
    }
    for (i = 0; i < 4; i++) {
        printf("  ");
        for (j = 0; j < rounded[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (k = 0; k < 4; k++) {
        printf("%5.2f ", value[k]);
    }
    return 0;
}

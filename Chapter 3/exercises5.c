#include <stdio.h>

int main() {
    int i, j;
    for (i = 1; i <= 4; i++) {
        printf("%d ",i);
    }
    printf("\n");
    for (i = 2; i <= 3; i++) {
        for (j = i; j <= 4; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    printf("2\n");
    return 0;
}

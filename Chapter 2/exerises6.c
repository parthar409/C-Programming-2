#include <stdio.h>

int main() {
    int n, P = 0, N = 0;
    while (1) {
        printf("Enter a number (enter 0 to stop): ");
        scanf("%d", &n);
        if (n == 0) {
            break;
        } else if (n > 0) {
            P++;
        } else {
            N++;
        }
    }
    printf("positive numbers: %d\n", P);
    printf("negative numbers: %d\n", N);
    
    return 0;
}

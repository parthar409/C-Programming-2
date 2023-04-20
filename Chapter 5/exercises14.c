#include <stdio.h>

int main() {
    int num, i, count = 0;

    for (num = 100; num <= 200; num++) {
        int Prime = 1;  
        if (num <= 1) {
            Prime = 0;
        } else {
            for (i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    Prime = 0;
                    break;
                }
            }
        }
        if (Prime) {
            printf("%d is a prime number.\n", num);
            count++;
        }
    }
    printf("There are %d prime numbers between 100 to 200.\n", count);
    return 0;
}


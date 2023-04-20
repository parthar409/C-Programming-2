#include <stdio.h>

int main() {
    int n = 120;
    double sum;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    //sum=1+1/2+1/3+1/4+1/5+1/n;
    printf("Sum is %.2f\n", sum);
    return 0;
}


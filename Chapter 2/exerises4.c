#include <stdio.h>

int main() {
    float n1, n2, result;
    printf("Enter numbers: ");
    scanf("%f%f", &n1,&n2);
    result = n1 / n2;
    printf("%.2f", result);
    return 0;
}

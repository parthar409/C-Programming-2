#include <stdio.h>

int main() {
    double num = 10.45678;
    
    printf("EF two decimal places: %.2e\n", num);
    printf("EF four decimal places: %.4e\n", num);
    printf("EF eight decimal places: %.8e\n", num);
    
    return 0;
}

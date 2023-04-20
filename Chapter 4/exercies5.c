#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter two two-digit integers: ");
    scanf("%d %d", &n1, &n2);
    
    int first_digit = n2 % 10;
    int second_digit = n2 / 10;
    
    int r1 = n1 * first_digit;
    int r2 = n1 * second_digit;
    int r3 = r1 + (r2 * 10);
    
    printf("\n\t  %d\n\tX %d\n\t----\n\t %3d\n\t %3d\n\t----\n\t%4d\n", n1, n2, r1,r2,r3);
    return 0;
}

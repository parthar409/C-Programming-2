#include <stdio.h>

int main() {
    float price;
    int paise;
    
    printf("Enter the price in decimal form: ");
    scanf("%f", &price);
    
    paise = price * 100; // convert to paise
    printf("price in paise is: %d\n", paise);
    return 0;
}

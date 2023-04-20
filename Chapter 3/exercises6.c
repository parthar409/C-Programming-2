#include <stdio.h>

int main() {
    float purchase_price, dep, salvage_value;
    int years_of_service;
    printf("Enter the purchase price: ");
    scanf("%f", &purchase_price);
    printf("Enter the years of service: ");
    scanf("%d", &years_of_service);
    printf("Enter the annual depreciation: ");
    scanf("%f", &dep);

    salvage_value = purchase_price-(years_of_service*dep);

    printf("The salvage value is: %.2f\n", salvage_value);
    return 0;
}

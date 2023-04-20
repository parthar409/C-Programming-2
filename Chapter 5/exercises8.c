#include <stdio.h>

int main() {
    float amount, discount, net_amount;
    int choice;
    
    printf("Enter the purchase amount: ");
    scanf("%f", &amount);
    
    printf("Enter the discount : ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            discount = 0.1;
            break;
        case 2:
            discount = 0.2;
            break;
        case 3:
            discount = 0.3;
            break;
        default:
            discount = 0;
            break;
    }
    
    if (discount > 0) {
        net_amount = amount - (amount * discount);
        printf("Discount applied: %.2f%%\n", discount * 100);
        printf("Net amount to be paid: %.2f\n", net_amount);
    } else {
        printf("Invalid discount code entered.\n");
    }
    
    return 0;
}

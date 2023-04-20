#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int units, total_units, meter_charge = 100;
    float surcharge = 0.0, bill = 0.0;
    
    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Enter the number of units consumed: ");
    scanf("%d", &total_units);
    
    if(total_units <= 200) {
        bill = total_units * 80;
    } else if(total_units <= 300) {
        units = total_units - 200;
        bill = 200 * 80 + units * 90;
    } else {
        units = total_units - 300;
        bill = 200 * 80 + 100 * 90 + units * 1;
    }
    
    bill += meter_charge;
    
    if(bill > 400) {
        surcharge = bill * 0.15;
        bill += surcharge;
    }
    
    printf("Name: %s\n", name);
    printf("Units consumed: %d\n", total_units);
    printf("Meter charge: Rs. %d\n", meter_charge);
    printf("Electricity charge: Rs. %.2f\n", bill - meter_charge - surcharge);
    printf("Surcharge: Rs. %.2f\n", surcharge);
    printf("Total amount: Rs. %.2f\n", bill);
    
    return 0;
}

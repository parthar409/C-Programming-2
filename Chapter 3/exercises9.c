#include <stdio.h>
#include <math.h>

int main() {
    double dr, sc, hc, eoq, tbo;

    printf("Enter the demand rate: ");
    scanf("%lf", &dr);

    printf("Enter the setup cost: ");
    scanf("%lf", &sc);

    printf("Enter the holding cost: ");
    scanf("%lf", &hc);

    eoq = sqrt((2*dr*sc)/hc);
    tbo = sqrt((2*sc)/(dr* hc));

    printf("Economy Order Quantity = %.2lf\n", eoq);
    printf("Optimal Time Between Orders = %.2lf\n", tbo);
    return 0;
}

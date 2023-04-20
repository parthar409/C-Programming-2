#include <stdio.h>

int main() {
    int code, call;
    float bill;
    printf("Enter customer code & number of call: ");
    scanf("%d%d", &code,&call);
    bill = 250+(call*1.25);
    printf("Bill=%.2f",bill);
    return 0;
}

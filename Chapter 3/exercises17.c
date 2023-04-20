#include <stdio.h>
#include <math.h>
#define pi 3.1416

int main() {
    int degrees;
    printf("x(degrees)\tsin(x)\t\tcos(x)\n");
    for (degrees = 0; degrees <= 180; degrees += 15) {
        double radians = degrees * pi / 180.0;
        double sine = sin(radians);
        double cosine = cos(radians);
        printf("%d\t\t%.2f\t\t%.2f\n", degrees, sine, cosine);
    }
    return 0;
}

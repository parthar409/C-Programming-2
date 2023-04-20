#include <stdio.h>

int main() {
    int math, physics, chemistry;
    int total;

    printf("Enter marks in Mathematics: ");
    scanf("%d", &math);

    printf("Enter marks in Physics: ");
    scanf("%d", &physics);

    printf("Enter marks in Chemistry: ");
    scanf("%d", &chemistry);

    total = math + physics + chemistry;

    if (math >= 60 && physics >= 50 && chemistry >= 40 && total >= 200) {
        printf("The candidate is eligible.\n");
    }
    else if (math + physics >= 150) {
        printf("The candidate is eligible.\n");
    }
    else {
        printf("The candidate is not eligible.\n");
    }

    return 0;
}

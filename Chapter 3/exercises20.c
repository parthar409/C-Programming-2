//The cast operator in C is used to convert a value of one data type to another data type
#include <stdio.h>

int main() {
    int radius;
    float pi = 3.14159;
    float area; 
    printf("Enter radius: ");
    scanf("%d", &radius);
    
    area = pi * (float) radius * (float) radius;
    
    printf("The area of the circle is: %f\n", area);   
    return 0;
}



//Write a program that reads a floating-point number and then displays
//the two right – most digit of the integral part of the number.
#include<stdio.h>
int main(){
    float n;
    int x,y;
    printf("Enter a floating point number: ");
    scanf("%f",&n);

    x=n;
    y=x%100;

    printf("Right most digit of integral part=%d\n",y);
}
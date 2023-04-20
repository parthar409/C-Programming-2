#include<stdio.h>
#include<math.h>

void main(){
    float a,b,c,n;
    printf("Enter A,B,C separated by comma: ");
    scanf("%f,%f,%f",&a,&b,&c);
    if(a==0&&b==0) {
        printf("No solution");
    } else if(a==0){
        printf("X = %.2f",(-c/b));
    }
    else if(((b*b)-(4*a*c))<0){
        printf("There is no real root");
    } else {
        n=sqrt(((b*b)-(4*a*c))/(2*a));
        printf("X1 = %.2f\n",(-b+n));
        printf("X2 = %.2f",(-b-n));
    }
}
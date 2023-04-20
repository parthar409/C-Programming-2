#include<stdio.h>
int main(){ 
    int u,t,a;
    float dis;
    printf("Enter the value: ");
    scanf("%d%d%d",&u,&a,&t);

    dis=(u*t)+(a*(t*t))/2;

    printf("Distance is %.2f\n", dis);
    return 0;
}
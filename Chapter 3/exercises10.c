#include <stdio.h>
#include <math.h>

int main() {
    double L , R, C , freq , Temp1,Temp2;
    
    printf("Enter Inductance, Resistance, Capacitannce: ");
    scanf("%lf %lf %lf",&L,&R,&C);   
    
    Temp1= (1/(L*C));   
    Temp2= ((R*R)/(4*C*C));   
    freq= sqrt(Temp1-Temp2);
    printf("The Frequency is %lf\n", freq);  
    
    return 0;
}

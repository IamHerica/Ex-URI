#include <stdio.h>
#include <math.h>
 
int main() {
 
    double A, B, C, x1, x2, Delta;
    
    scanf("%lf%lf%lf",&A,&B,&C);

    Delta=pow(B,2)-4*A*C;
    x1=(-B + sqrt(Delta))/(2*A);
    x2=(-B - sqrt(Delta))/(2*A);
  
    if((A == 0.0)||(Delta <= 0))
      printf("Impossivel calcular\n");
    else
      printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);

    return 0;
}
#include <stdio.h>
#include <math.h>
 
int main() {
 
double raio, elevado, area;
 
 scanf("%lf", &raio);

 elevado = pow(raio,2);
 area = 3.14159 * elevado;
 
 printf("A=%.4f\n", area);
 
 return 0;
}

 
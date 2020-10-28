#include <stdio.h>
#include <math.h>
 
int main() {
 
 double raio, total = 0;
 
 scanf("%lf", &raio);
 
 total = ((4.0/3) * 3.14159);
 total = (total * pow(raio, 3));
 
 printf("VOLUME = %.3lf\n", total);
 
    return 0;
}
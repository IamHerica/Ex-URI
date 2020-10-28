#include <stdio.h>
 
int main() {
 
 int DistanciaTotal;
 float combustivel;
 double total;
 
 scanf("%d", &DistanciaTotal);
 scanf("%f", &combustivel);
 total = (DistanciaTotal/combustivel);
 
 printf("%.3lf km/l\n", total);
 
    return 0;
}
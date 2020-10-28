#include <stdio.h>
#include <math.h>
 
int main() {
 
    double x1, y1, x2, y2, Distancia = 0;
    
    scanf("%lf", &x1);
    scanf("%lf", &y1);
    scanf("%lf", &x2);
    scanf("%lf", &y2);
    
    Distancia = (pow(x2-x1, 2) + pow(y2-y1, 2));
    Distancia =  sqrt(Distancia);

    printf("%.4lf\n", Distancia);
    
    return 0;
}
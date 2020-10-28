#include <stdio.h>
 
int main() {
 
    double A, B, C, AreaTriangulo, AreaCirculo, AreaTrapezio, AreaQuadrado, AreaRetangulo;
    
    scanf("%lf %lf %lf", &A, &B, &C); 
    
    AreaTriangulo = ((A * C)/ 2);
    AreaCirculo =((3.14159)*(C*C));
    AreaTrapezio = (((A+B)*C)/2);
    AreaQuadrado = (B*B); 
    AreaRetangulo = (A*B);
    
    printf("TRIANGULO: %.3lf\n", AreaTriangulo);
    printf("CIRCULO: %.3lf\n", AreaCirculo);
    printf("TRAPEZIO: %.3lf\n", AreaTrapezio);
    printf("QUADRADO: %.3lf\n", AreaQuadrado);
    printf("RETANGULO: %.3lf\n", AreaRetangulo);
    
    return 0;
}
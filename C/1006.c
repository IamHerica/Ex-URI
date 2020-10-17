#include <stdio.h>
 
int main() {
 
    double A, B, C, Media;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    Media = (((2*A) + (3*B) + (5*C)) / 10);
    
    printf("MEDIA = %.1lf\n", Media);
 
    return 0;
}
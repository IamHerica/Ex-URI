#include <stdio.h>
 
int main() {
 
   int tempo, velocidade;
   double total;
   
   scanf("%d", &tempo);
   scanf("%d", &velocidade);
   
   total = (tempo * velocidade);
    
   printf("%.3lf\n", total/12);
   
    return 0;
}
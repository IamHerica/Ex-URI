#include <stdio.h>
 
int main() {
 
    int valor, cem, cinquenta, vinte, dez,cinco, dois, um;
    
    scanf("%d", &valor);
    printf("%d\n", valor);

    cem = (valor / 100);
    printf("%d nota(s) de R$ 100,00\n", cem);
    cem = (valor % 100);
    
    cinquenta = (cem / 50);
    printf("%d nota(s) de R$ 50,00\n", cinquenta);
    cinquenta = (cem % 50);

    vinte = (cinquenta/20);
    printf("%d nota(s) de R$ 20,00\n", vinte);
    vinte = (cinquenta % 20);

    dez = (vinte / 10);
    printf("%d nota(s) de R$ 10,00\n", dez);
    dez = (vinte % 10);

    cinco = (dez / 5);
    printf("%d nota(s) de R$ 5,00\n", cinco);
    cinco = (dez % 5);

    dois = (cinco / 2);
    printf("%d nota(s) de R$ 2,00\n", dois);
    dois = (cinco % 2);

    um = (dois / 1);
    printf("%d nota(s) de R$ 1,00\n", um);
    um = (dois % 1);
  
 
    return 0;
}
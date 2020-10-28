#include <stdio.h>
 
int main() {
 
    int entrada, ano, mes, dia;
    
    scanf("%d", &entrada);
    
    ano = entrada / 365;
    printf("%d ano(s)\n", ano);
   

    mes = (entrada%365)/30;
    printf("%d mes(es)\n", mes);

    dia = (entrada % 365)%30;
    printf("%d dia(s)\n", dia);

 
    return 0;
}
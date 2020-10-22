#include <stdio.h>
 
int main() {
 
   int NumeroFunc, Horas;
   double CalcSalario, TotalSalario;
   
   scanf("%d", &NumeroFunc);
   scanf("%d", &Horas);
   scanf("%lf", &CalcSalario);
   
   TotalSalario = (Horas * CalcSalario);
   
   printf("NUMBER = %d\n", NumeroFunc);
   printf("SALARY = U$ %.2lf\n", TotalSalario);
 
    return 0;
}

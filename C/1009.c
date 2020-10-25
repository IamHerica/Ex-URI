#include <stdio.h>
 
int main() {
 
   char Name;
   double Salary, Montante, Total;
   scanf(" %s", &Name);
   scanf("%lf", &Salary);
   scanf("%lf", &Montante);
   
   Total = (Salary + (Montante*0.15));
   
   printf("TOTAL = R$ %.2lf\n", Total);
   
    return 0;
}
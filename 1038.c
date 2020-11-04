#include <stdio.h>
 
int main() {
 
  float codigo, item, total;
  
  scanf("%f %f", &codigo, &item);
  
  if (codigo == 1)
     codigo = 4.00;
     else
     if (codigo == 2)
        codigo = 4.5;
        else
         if (codigo == 3)
          codigo = 5.00;
          else
           if (codigo == 4)
           codigo = 2.00;
           else
             if (codigo ==5)
             codigo = 1.50;

  
   total = codigo * item;
  
   printf("Total: R$ %.2f\n", total);
  
 
    return 0;
}
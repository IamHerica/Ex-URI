#include <stdio.h>
#include <stdlib.h>
 
int main() {
 
  int A, B, C, total=0;
  
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  
  total = ((((A+B) + abs(A - B)))/2);
  total = ((((total+C) + abs(total -C)))/2);
  
  printf("%d eh o maior\n", total);
  
 
    return 0;
}
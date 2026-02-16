#include <stdio.h>
int dias;
int main(void) {
  printf("digite a quantidade de dias");
  scanf("%i", &dias);
  float total= 45*dias;
  float total_desconto = total - total*0.08 ;
  printf("sua quantia final é: %.2f",total_desconto);

  return 0;
}

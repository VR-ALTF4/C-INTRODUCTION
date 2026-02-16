#include <stdio.h>
int main(void){
  float conta=0;
  int quantidade_p;
  float gorgeta;
  float resultado_dividido;
  printf("qual o valor da sua conta?");
  scanf("%f", &conta);

  printf("qual a quantidade de pessoas?");
  scanf("%i",&quantidade_p);
  gorgeta = conta/100 * 5;
  resultado_dividido = (conta+gorgeta)/quantidade_p ;
  printf("a conta dividida para todos igualmente com o acréscimo da gorgeta do garçom é %.2f",resultado_dividido);


  return 0;}

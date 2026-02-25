#include <stdio.h>
#define SOMAR 1
#define SUBTRAIR 2
#define MULTIPLICAR 3
#define DIVIDIR 4
#define SAIR 0
int opcao;
int main(void) {
  float a = 0;
  float b = 0;
  printf("escolha 1 numero para operacao\n");
  scanf("%f", &a);
  printf("escolha mais um numero para operacao\n");
  scanf("%f", &b);
  printf("ESCOLHA UMA OPCAO PARA CALCULOS: 1 PARA SOMAR,2 PARA SUBTRAIR,3 PARA "
         "MULTIPLICAR,4 PARA DIVIDIR E 0 PARA SAIR");
  scanf("%i", &opcao);

  switch (opcao) {
  case SOMAR:
    printf("%.2f+%.2f = %.2f", a, b, a + b);
    break;

  case SUBTRAIR:
    printf("%.2f-%.2f = %.2f", a, b, a - b);
    break;

  case MULTIPLICAR:
    printf("%.2f*%.2f = %.2f", a, b, a * b);
    break;

  case DIVIDIR:
    printf("%.2f/%.2f = %.2f", a, b, a / b);
    break;

  case SAIR:
  default:
    printf("voce saiu");
    break;


    return 0;
  }
}

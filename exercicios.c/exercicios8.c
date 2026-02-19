#include <stdio.h>
#define PONDERADA 1
#define ARITMETICA 2
float aritmetica(int n1, int n2, int n3) { return (n1 + n2 + n3) / 3; }
float ponderada(int n1, int n2, int n3) {
  return (n1 * 3 + n2 * 3 + n3 * 4 / 1) / 10;
}
int main(void) {
  int n1 = 0;
  int n2 = 0;
  int n3 = 0;
  int n4 = 0;
  int opcao = 0;
  printf("digite a nota 1:");
  scanf("%i", &n1);
  printf("digite a nota:2:");
  scanf("%i", &n2);
  printf("digite a nota3:");
  scanf("%i", &n3);
  printf("escolha 1 para ponderada e 2 para aritmetica");
  scanf("%i",&opcao);
  switch (opcao) {
  case PONDERADA:
    printf(" a media ponderaada entre as notas é:%.2f", ponderada(n1, n2, n3));
  case ARITMETICA:
    printf(" a media ponderaada entre as notas é:%.2f", aritmetica(n1, n2, n3));
    break;
  }

  return 0;
}

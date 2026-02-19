#include <stdio.h>

#define JANEIRO 1
#define FEVEREIRO 2
#define MARCO 3
#define ABRIL 4
#define MAIO 5
#define JUNHO 6
#define JULHO 7
#define AGOSTO 8
#define SETEMBRO 9
#define OUTUBRO 10
#define NOVEMBRO 11
#define DEZEMBRO 12

int main(void) {
  int mes = 0;
  printf("digite um valor valido que represente um mes valido\n");
  scanf("%i", &mes);
  switch (mes) {
  case JANEIRO:
    printf("JANEIRO");
  case FEVEREIRO:
    printf("FEVEREIRO");
    break;
  case MARCO:
    printf("MARCO");
    break;
  case ABRIL:
    printf("ABRIL");
    break;
  case MAIO:
    printf("MAIO");
    break;
  case JUNHO:
    printf("JUNHO");
    break;
  case JULHO:
    printf("JULHO");
    break;
  case AGOSTO:
    printf("AGOSTO");
    break;
  case SETEMBRO:
    printf("SETEMBRO");
    break;
    printf("");
    break;
  case OUTUBRO:
    printf("OUTUBRO");
    break;
  case NOVEMBRO:
    printf("NOVEMBRO");
    break;
  case DEZEMBRO:
    printf("DEZEMBRO");
    break;
  default:
  printf("mes invalido");
  break;
  }
  return 0;
}

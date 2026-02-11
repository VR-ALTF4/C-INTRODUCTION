#include <stdio.h>
typedef int inteiro;

typedef struct Pessoa {
  int idade;
  long int telefone;
} pessoa ;
int main(void) {
  inteiro valor = 10;

  pessoa p1;



  scanf("%i %li",&p1.idade,&p1.telefone);
  printf("%i\n", p1.idade);
  printf("%li\n", p1.telefone);
  return 0;
}

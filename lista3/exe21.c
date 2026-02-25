#include <stdio.h>
int main(void) {
#define COLUNAS 20
#define LINHAS 10
  for (int i = 0; i < LINHAS; i++) {
    for (int f = 0; f < i; f++) {
      printf("*");

    }
    printf("\n");
  }

  return 0;
}

#include <stdio.h>
int N = 0;
int i;
int somar = 0;
int main(void) {
  printf("escolha um numero INTEIRO para  representar o valor N");
  scanf("%i", &N);
  for (i = 0; i <= N; i++) {
    somar += i;
  }
  printf("%i", somar);

  return 0;
}

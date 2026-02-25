#include <stdio.h>
int main(void) {
  int N = 0;
  int I = 0;
  printf("digite um valor para N");
  scanf("%i", &N);

  for (I = 0; I <= N; I++) {

    if (I % 2 == 0) {
      int pot = I * I;
      printf("%i\n", pot);
    }
  }

  return 0;
}

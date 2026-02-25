#include <stdio.h>
int i;
 double dinheiro=0.01;
 int dias = 30;
int main(void) {
  for (i = 0; i < dias; i ++)
  {
    dinheiro *= 2;
  }
    printf("%lf", dinheiro);

  return 0;
}

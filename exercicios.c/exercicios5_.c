#include <stdio.h>
#include <math.h>

float peso = 0;
float altura = 0;

int main(void) {

  printf("informe seu peso\n");
  scanf("%f", &peso);
  printf("informe sua altura\n");
  scanf("%f", &altura);
  float imc = peso / pow(altura, 2);

  if (imc < 18.5) {
    printf("\nabaixo do peso\n");
  } else if (imc > 18.5 && imc < 25) {
    printf("\npeso normal\n");
  } else

      if (imc > 25 && imc < 30) {
    printf("sobrepeso");
  }

  else if (imc > 30 && imc < 35) {
    printf("\nobesidade grau 1\n");
  } else if (imc > 35 && imc < 40) {
    printf("\nobesidade grau 2\n");
  } else if (imc >= 40) {
    printf("obesidade grau 3");
  }
  return 0;
}

#include <stdio.h>
int main(void) {
  int hora;
  int minutos;
  int segundos;

  printf("entrada\n");
  hora = 60 * minutos;
  minutos = 60;
  segundos;
  printf("insira seus segundos para conversão em minutos:");
  scanf("%i", &segundos);
  float conversao = segundos / 60;
  printf("sua conversão para minutos é igual a:%f", conversao);
  printf("minutos");
  minutos = 0;
  printf("insira a quantidade de minutos desejados:");
  scanf(" %i", &minutos);
  float conversao2 = minutos / 60;
  printf("sua quantidade de minutos convertidos em horas é igual a:");
  scanf("%f", conversao2);

  return 0;
}

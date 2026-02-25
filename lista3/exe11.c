#include <stdio.h>
int segundos =0;
int minutos = 0;
float gramas= 10;
int main(void) {
while(gramas >=0.05) {

  gramas/=2;
  segundos+=50;

  }

  printf("%isegundos",segundos);

  return 0;}

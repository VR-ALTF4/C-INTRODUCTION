#include <stdio.h>
#include <stdlib.h>
int main(void) {
  FILE *arquivo;

  arquivo = fopen("texto.txt","w");
  fprintf(arquivo,"aaaa");
  fclose(arquivo);




  return 0;}

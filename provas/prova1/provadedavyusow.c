#include <stdio.h>
#include "jogador.h"
#include <stdlib.h>
#include <time.h>
int main(void){
    srand(time(NULL));
    Mapa mapa;
    inicializar_mapa(&mapa);
    imprimir_mapa(&mapa);
    inserir_jogador(&mapa,'V');
    printf("novo mapa com jogador:\n");
    imprimir_mapa(&mapa);
return 0;} 
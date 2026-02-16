#include "mapa.h"
#include <stdlib.h>

#define X 0
#define Y 1


typedef struct{
    char simbolo;
    Posicao posicao;



}Jogador;
Jogador criar_jogador(Mapa *mapa,char simbolo){
    int largura=rand()%LARGURA;
    int altura=rand()%ALTURA;
    Jogador j1;
    j1.simbolo=simbolo;
    j1.posicao.x= largura;
    j1.posicao.y= altura;




return j1;}

void inserir_jogador(Mapa *mapa,char simbolo){
    Jogador jogador = criar_jogador(mapa,simbolo);
    mapa->blocos[jogador.posicao.x][jogador.posicao.y]= jogador.simbolo;


}


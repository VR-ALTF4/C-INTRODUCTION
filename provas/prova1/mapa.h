#include <stdio.h>
#include <stdbool.h>

#define LARGURA 10
#define ALTURA 10

typedef struct
{
    int blocos[LARGURA][ALTURA];

} Mapa;

bool inicializar_mapa(Mapa *mapa)
{
    for (int i = 0; i < LARGURA; i++)
    {
        for (int j = 0; j < ALTURA; j++)
        {
            mapa->blocos[i][j] = 0;
        }
    }

    return true;
}
void imprimir_mapa(Mapa *mapa)
{
    for (int i = 0; i < LARGURA; i++)
    {
        for (int j = 0; j < ALTURA; j++)
        {
            printf("%i",mapa->blocos[i][j]);
        }
        printf("\n");
    }
}

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
    int i, j = 0;
    while (i < LARGURA)
    {
        while (j < ALTURA)
        {
            mapa->blocos[i][j] = 0;
            j++;
        }
        i++;
    }

    return true;
}



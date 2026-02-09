#include <stdio.h>
#include <stdbool.h>
int baseball_bat = 100;
int main(void)
{
    // if (baseball_bat > 150)
    // {
    //     printf("o valor do meu baseball bat é%i\n", baseball_bat);
    // }
    // else if (baseball_bat < 150)
    // {
    //     printf("seu baseball bat é pequeno de mais");
    // }

    long dias = 34560;
    long dia = dias % 7 + 1;

    switch (dia)
    {
    case 1:
        printf("domingo");
        break;
    case 2:
        printf("segunda");
        break;
    case 3:
        printf("terça");
        break;
    case 4:
        printf("quarta feira");
        break;
    case 5:
        printf("quinta feira");
        break;
    case 6:
        printf("sexta feira");
        break;
    case 7:
        printf("sábado");
        break;
    }

    return 0;
}

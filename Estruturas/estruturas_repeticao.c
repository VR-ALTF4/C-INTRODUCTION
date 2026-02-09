#include <stdio.h>
int main(void)
{
    int salario = 50;
    int dias = 7;
    for (int i = 0; i < dias; i++)
    {
        salario *= 1000;
    }
    printf("salário é:%i", salario);
    salario=50;
    while (salario < 100000)
    {
        salario *= 2;
    }
    printf("seu salário final é %i", salario);
    
    return 0;
}
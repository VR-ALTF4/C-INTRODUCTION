#include <stdio.h>
#include <math.h>
int main(void){
short valor = 0;
short valor2 = 0;
valor = 20 + 20;
valor2 = 15 + 15;
short resultado = valor + valor2;
printf("a soma entre as duas variáveis operacionais é: %i\n",resultado);
valor = -20;
valor2= -8;
resultado = valor + valor2;
printf("a soma entre as duas variáveis operacionais é: %i\n",resultado);
float resultado_2 = 0;
resultado_2 = 23.5*23.5; 
printf("o valor da multiplicação é: %f\n",resultado_2);
float resultado_3 = 23.9/23.4;
printf("o valor da divisão é: %f\n",resultado_3); 
int resultado_4 = 0;
valor = 20% 2;
valor2= 30% 3;
resultado = valor + valor2;
printf("o resultado de mod %i\n",resultado_4);
int resultado_aprox = 0;
valor = 2.5;
valor2 = 0.5;
resultado_aprox = round(valor * valor2);
printf("o valor aproximado da multiplicação entre o valor 1 e valor 2 é: %i",resultado_aprox);
return 0;
}
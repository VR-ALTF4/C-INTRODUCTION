#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main(void){
 char *letra = setlocale(LC_ALL,"");
 printf("%s\n",letra);
system("touch down.txt");
system("echo \"disgraça\" > down.txt");
printf("\tconteúdo do arquivo down.txt\t\n");
system("cat down.txt");




  return 0;}

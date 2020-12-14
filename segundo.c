#include <stdio.h>
int main () {
  int Dias; /*Declara variaveis*/
  float Anos;
  printf("Entre com o numero de dias:"); /*Entrada de dados*/
  scanf("%d", &Dias);
  Anos=Dias/365.25; /*Converte Dias->Anos*/
  printf("\n\n %d dias equivalem a %f anos.\n", Dias, Anos);
  return(0);
}

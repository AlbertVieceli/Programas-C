#include<stdio.h>

int main(){
  int dia;
  printf("Digite o numero correspondente ao dia(util) da semana: ");
  scanf("%d", &dia);
  switch(dia){
    case 2:
    printf("\n segunda \n");
    break;
    case 3:
    printf("\n terça \n");
    break;
    case 4:
    printf("\n quarta \n");
    break;
    case 5:
    printf("\n quinta \n");
    break;
    case 6:
    printf("\n sexta\n(sextou!!) \n");
    break;
    default:
    printf("\n apenas dia util seu animal!! \n");
  }
  return 0;
}

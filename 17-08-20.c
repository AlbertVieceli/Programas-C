#include <stdio.h>
int main(){
  int dia,mes,ano,bisx;
  char entrada=' ';

  while (entrada!='s' || entrada!='S') {
    aqui:
    printf("Digite um dia: \n");
    scanf("%d",&dia);
    printf("Digite um mes(numero): \n");
    scanf("%d",&mes);
    printf("Digite um ano: \n");
    scanf("%d", &ano);
    //bisx = (ano/4)
    if((dia<=31 && dia>=1)&&(mes<=12 && mes>=1)&&
    (ano<=2100 && ano>=1900)){
      printf("Data válida\n");
      if ((ano%4)==0 && (ano%100)!=0 || (ano%400)==0){
        printf("bissexto\n");
      }else{
        printf("Não bissexto\n");
      }
    }else{
      printf("Data inválida\n");
      goto aqui;
    }
    printf("Deseja verificar se mais um ano é bissexto?[s/n]");
    scanf("%c\n",entrada);
  }
  return 0;
}

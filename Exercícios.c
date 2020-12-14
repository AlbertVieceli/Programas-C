#include<stdio.h>
/*int teste(int x)
{
  printf("O caractere digitado foi %c, e seu correspondente na tabela ASCII é %d.", x,x);
}

int main()
{
  char ch;
  printf("Digite um caracter:");
  scanf("%c",&ch);
  teste(ch);
  return(0);
}*/
/* Exercício 3*/
int main ()
{
  char str[5]="Joao";
  char tes[5]="Maria";
  printf("a primeira string é %s e a segunda é %s\n",str, tes);
  printf("O segundo caracter de cada string é respectivamente %c e %c.\n",str[1], tes[1] );
  return(0);

}

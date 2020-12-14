#include<stdio.h>
/*primeiro exemplo conta ate 100*/
/*int main()
{
  int count;
  for(count=1;count<=100;count=count+1)printf("%d ",count);
  return(0);
}*/
/*For ate 100 usando string*/
int main()
{
  char string[100];
  int i, cont;
  printf("\nDigite uma frase:");
  gets(string);
  printf("\nFrase digitada:\n%s.",string);
  cont = 0;
  for(i=0;string[i] != '\0'; i=i+1)
  {
    if (string[i]=='c')
    cont = cont + 1;
  }
  printf("\nNumero de caracteres c = %d", cont);
  return(0);
}
/*Imprime alfabeto letras minusculas*/
/*int main()
{
  char letra;
  for(letra = 'A'; letra<='Z';letra=letra+1)
  printf("%c ",letra);
  return(0);
}*/

#include<stdio.h>
/*int prod(int x, int y)
{
  int a;
  a=x*y;
  return(a);
}
int main ()
{
  int saida;
  saida=prod(12,7);
  printf("A saida é: %d\n",saida);
  return(0);
}*/

/*SEGUNDO EXEMPLO*/
/*float prod(float x, float y)
{
  return(x*y);
}
int main()
{
  float saida;
  saida=prod(45.2, 0.0067);
  printf("A saida e: %f\n", saida);
  return(0);
}*/

/*EXERCÍCIO*/

int soma(int x, int y)
{
  int a;
  a=x+y;
  return(a);
}
int main ()
{
  int saida;
  int valor1;
  int valor2;
  printf("Entre com o primeiro valor:\n");
  scanf("%d", &valor1);/*NAO ESQUEÇA DO & ANTES DA VARIAVEL NA FUNCAO SCANF*/
  printf("Entre com o segundo valor:\n");
  scanf("%d", &valor2);
  saida = soma(valor1, valor2);
  printf("O valor da soma é: %d", saida);
  return(0);
}

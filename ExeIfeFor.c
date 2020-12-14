/*a) pois = é para atribuicao, enquanto == e para comparacao.*/
#include<stdio.h>
/*b)100 a 1*/
/*int main()
{
  int count;
  for(count=100;count>=1;count=count-1)
  printf("%d ",count);
  return(0);
}*/
/*Quantos A na string e A por B*/
int main ()
{
  char frase[100];
  int i, count;
  printf("digite a frase curta:");
  scanf("%s",frase);
  printf("frase é %s", frase);
  count=0;
  for(i=0;i<=99;i=i+1)
    if(frase[i]=='a')
  {
      frase[i]='b';
      count=count+1;
  }
  printf("\n%d é o total de letras a:", count);
  printf("\nNova frase fica: %s",frase);
  return(0);

}

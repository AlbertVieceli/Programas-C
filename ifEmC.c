#include<stdio.h>
int main()
{
  int num;
  printf("Digite um numero:");
  scanf("%d",&num);
  if(num>10)printf("\nO numero é maior do que 10.");
  if(num==10)
  {
    printf("\nVoce acertou!\nO numero é igual a 10.");

  }
  if(num<10)printf("\nO numero é menor do que 10.");
  return(0);
}

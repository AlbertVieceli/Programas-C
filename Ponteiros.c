#include<stdio.h>
//PONTEIROS
/*int main(){
  int count=10;
  char carac = 'a';
  int *pt;
  char *car;
  car=&carac;
  pt=&count;
  printf("endereço é %x\n",pt);
  printf("endereço char é %x\n",car);
  printf("valor agora é %d\n",*pt);
  *(pt++);
  //pt--; //decremento no endereço int de 4 em 4
  car++; //incremento no char é de 1 em 1
  //(*pt)++;//Incrementa o conteudo, de 10 para 11
  printf("endereço é %x\n",pt);
  printf("endereço char é %x\n",car);
  //*pt=12;
  printf("valor agora é %d",*pt);
  return 0;
}*/

//EXEMPLO 1
/*int main ()
{
  int num,valor;
  int *p;
  num=55;
  p=&num; //Pega o endereco de num
  valor=*p; // Valor e igualado a num de uma maneira indireta
  printf ("\n\n%d\n",valor);
  printf ("Endereco para onde o ponteiro aponta: %p\n",p);
  printf ("Valor da variavel apontada: %d\n",*p);
  return(0);
}*/

//EXEMPLO 2
/*int main ()
{
  int num,*p;
  num=55;
  p=&num; // Pega o endereco de num
  printf ("\nValor inicial: %d\n",num);
  *p=100; // Muda o valor de num de uma maneira indireta
  printf ("\nValor final: %d\n",num);
  return(0);
}*/

//AUTO AVALIAÇÃO
/*A)
p++; Incrementa o endereço que o ponteiro aponta
variando se é *int(4) ou *char(1).

(*p)++; incrementa em 1 o conteudo do ponteiro.

*(p++); armazenando no *p o valor incrementado do endereço de p

*(p+10); incrementa o conteudo do ponteiro em 10 posições

ponteiros n podem ser divididos, multiplicados, somados ou
subitraidos entre si, nem adicionar e subtrair floats ou doubles
de ponteiros.

B)*/
/*int main()
{
  int y, *p, x;
  y = 0;
  p = &y;//p recebe o endereço de y
  x = *p;//x = 0 -> x=y
  x = 4;// não relacionado com *p ou y
  (*p)++;//y=1
  x--//4-1->x=3
  (*p) += x;//y=1+3
  printf ("y = %d\n", *p);
  return(0);
}*/


//INICIALIZAÇÃO DE PONTEIRO -> char *str1="String constante.";

//PONTEIROS PARA PONTEIROS -> tipo_da_variável **nome_da_variável;
/*int main()
{
  float fpi = 3.1415, *pf, **ppf; //se acrescenta os * conforme se usa o pont de pont
  pf = &fpi;
   ///* pf armazena o endereco de fpi
  ppf = &pf;
   ///* ppf armazena o endereco de pf
  printf("ponteiro do ponteiro: %f\n", **ppf);
   ///* Imprime o valor de fpi
  printf("ponteiro: %f\n", *pf);
   ///* Tambem imprime o valor de fpi
  return(0);
}*/
//auto avaliação
/*int main()
{
  int x, *p, **q;
  p = &x;
  q = &p;
  x = 10;
  printf("\n%d\n", **q);
  return(0);
}*/

//O QUE NÃO FAZER
//SEMPRE INICIE UM PONTEIRO
/*int main () ///* Errado - Nao Execute
{
  int x,*p;
  x=13;
  *p=x;// ponteiro n inicializado p=&x;
  return(0);
}*/

//auto avaliação
int main(){
  int matrz[100][100];
  int*i;
  int b;
  i=matrz[0];
  for(b=0;b<10000;b++){
    printf("%d enchendo\n",*i);
    (*i)++;
  }
  return 0;
}

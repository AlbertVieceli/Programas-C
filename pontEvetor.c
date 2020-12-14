#include<stdio.h>
//VETORES E PONTEIROS
//vetores como ponteiros
/*int main ()     //calculando deslocamento na matriz, LENTO
{
  float matrx [50][50];
  int i,j;
  for (i=0;i<50;i++)
    for (j=0;j<50;j++)
    matrx[i][j]=0.0;
  return(0);
}*/

/*int main ()       //CALCULANDO INCREMENTO DE PONTEIRO, RÁPIDO!
{
  float matrx [50][50];
  float *p;
  int count;
  p=matrx[0];
  for (count=0;count<2500;count++)
    {
      printf("%d\n",count);
      *p=0.0;
      p++;
    }
return(0);
}*/

/*int main(){     //TRABALHANDO CERTO COM VETORES E PONTEIROS
  int vetor[10];
  int *ponteiro, i;
  ponteiro = &i;

//  vetor = vetor + 2;/* ERRADO: vetor nao e' variavel */
//vetor++;/* ERRADO: vetor nao e' variavel */
//vetor = ponteiro;/* ERRADO: vetor nao e' variavel */

//ponteiro = vetor;/* CERTO: ponteiro e' variavel */
//ponteiro = vetor+2; /* CERTO: ponteiro e' variavel */
/*
  return 0;
}*/

/*#include <stdio.h> //PONTEIROS COMO VETORES
  int main ()
  {
  int matrx [10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int *p;
  p=matrx;
  printf ("O terceiro elemento do vetor e: %d\n",p[2]);
  printf ("O terceiro elemento do vetor e: %d",*(p+2));
  return(0);
}*/

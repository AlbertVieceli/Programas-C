#include<stdio.h>

int main(){

  int x,y,z;
  x=y=10;
  z=++x;
  printf("z = %d\n",z);
  x=-x;
  printf("x = %d\n",x );
  printf("y = %d\n",y);
  y++;
  printf("y = %d\n",y );
  x=x+y-(z--);
  printf("x = %d\n",x );

//ENCADEADOR DE EXPRESSÕES A VIRGULA ,
//int x, y;
/*for(x=0 , y=0 ; x+y < 100 ; ++x , y++)
/* Duas variáveis de controle: x e y . Foi
atribuído o valor zero a cada uma delas na inicialização do for e
ambas são incrementadas na parte de incremento do for */
//printf("\n%d ", x+y);
/* o programa imprimirá os números pares de 2 a 98 */
}

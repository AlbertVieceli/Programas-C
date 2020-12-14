#include "stdio.h"

int main() {
  int index = 0, contador;
  char letras[5] = "Joao";
  for (contador=0; contador < 1000; contador++)
  {
      printf("\n%c",letras[index]);
      if(contador%5==0){
        (index==3) ? index=0: ++index;
    }
  }
  //return 0;
}

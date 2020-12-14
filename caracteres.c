#include<stdio.h>
/*#include<conio.h>biblioteca para "pegar" caracter mas so funciona no ms-dos,
no unix vai no modo raiz(aperta enter depois que digita)*/
int main()
{
  printf("Aperte uma tecla e depois ENTER \n");
  char Ch;
  /*Ch='D';
  Ch=getch(); biblioteca conio
  printf("%c\n",Ch);*//*imprime o caracter*/
  scanf("%c", &Ch);
  printf("Voce pressionou a tecla %c",Ch);
  printf("\nO seu valor ASCII é de: %d",Ch);/* imprime o valor int na tabela ASCII*/
  return (0);
}

#include<stdio.h>
#include<string.h>
/*int main()
{
  char string[100];
  printf("Digite uma string: ");
  gets(string);
  printf("\nVocê digitou:%s", string);
  return(0);
}*/
/*Segundo exemplo*/
/*int main()
{
  char str[10]="Joao";
  printf("\nString: %s", str);
  printf("\nSegunda letra: %c",str[1]);
  str[1]='U';
  printf("\nAgora a segunda letra é: %c", str[1]);
  printf("\nString resultante: %s", str);
  return(0);
}*/

//STRCPY copia
/*int main ()
{
char str1[100],str2[100],str3[100];
  printf ("Entre com uma string: ");
  gets (str1);
  strcpy (str2,str1); // Copia str1 em str2
  strcpy (str3,"Voce digitou a string ");//Copia "Voce digitou a string" em str3
  printf ("\n\n%s%s",str3,str2);
  return(0);
}*/

//STRCAT concatena
/*int main ()
{
  char str1[100],str2[100];
  printf ("Entre com uma string: ");
  gets (str1);
  strcpy (str2,"Voce digitou a string ");
  strcat (str2,str1); //str2 armazenara' Voce digitou a string + o conteudo de str1
  printf ("\n\n%s",str2);
  return(0);
}*/

//STRLEN tamanho da nString
/*int main ()
{
  int size;
  char str[100];
  printf ("Entre com uma string: ");
  gets (str);
  size=strlen (str);
  printf ("\n\nA string que voce digitou tem tamanho %d",size);
  return(0);
}*/

//STRCMP compara string
int main ()
{
  char str1[100],str2[100];
  printf ("Entre com uma string: ");
  gets (str1);
  printf ("\n\nEntre com outra string: ");
  gets (str2);
  if (strcmp(str1,str2))
      printf ("\n\nAs duas strings são diferentes.");
  else printf ("\n\nAs duas strings são iguais.");
  return(0);
}

#include<stdio.h>
int square(int x)/*calc quadrado de x*/
{
  printf("O quadrado é %d",(x*x));
  return(0);
}
int main()
{
int num;
printf("Entre com um numero:");
scanf("%d",&num);
printf("\n\n");
square(num);
return(0);
}

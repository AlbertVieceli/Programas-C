#include<stdio.h>
int mult(float a, float b, float c)/*Multiplica por 3*/
{
  printf("%f",a*b*c);
  return(0);
}
int main()
{
  float x,y;
  x=2.5;
  y=2.5;
  mult(x,y,5);
  return(0);
}

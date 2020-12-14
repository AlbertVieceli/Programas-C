#include <stdio.h>
/*int main ()
{
  int mtrx [20][10];
  int i,j,count;
  count=1;
    for (i=0;i<20;i++)
      for (j=0;j<10;j++)
      {
        mtrx[i][j]=count;
        count++;
      }
  return(0);
}*/

//MATRIZES DE STRING
/*int main(){
  char strings[5][100];
  int count;
  for(count = 0;count <5;count++){
    printf("\nDigite uma string: ");
    gets(strings[count]);
  }
  printf("\nAs strings digitadas foram:\n");
  for(count=0;count<5;count++){
    printf("%s\n",strings[count] );
  }
  return 0;
}*/

//AUTO AVALIAÇÃO
int main()
{
  int t, i, M[3][4];
    for (t=0; t<3; ++t){
      for (i=0; i<4; ++i){
        M[t][i] = (t*4)+i+1;
      }
    }
for (t=0; t<3; ++t){
    for (i=0; i<4; ++i)
    printf ("%3d ", M[t][i]);
    printf ("\n");
}
return(0);
}

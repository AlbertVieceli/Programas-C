#include <stdio.h>
//#include <conio.h>
int main ()
{
int Count;
char ch;
for (Count=1;Count++;)
{
//ch = getch();
gets(ch);
if (ch == 'X') break;
printf("\nLetra: %c",ch);
}
return(0);
}

/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  int vota = 0, votacao[7] = { 0 };

  do
    {
      printf
	("Escolha entre os seguintes sistemas para a implementacao \n 1- Windows Server. 2 - Unix. 3 - Linux. 4 - Netware. 5 - Mac OS. 6 - Outro. Digite 0 para encerrar\n");
      scanf ("%d", &vota);

      if (vota >= 1 && vota <= 6)
	{
	  votacao[vota]++;
	}
    }
  while (vota != 0);
  printf ("resultado da enquete: \n");
  for (int i = 1; i <= 6; i++)
    {
      printf ("OpC'C#o %d: %d votos \n", i, votacao[i]);
    }
}

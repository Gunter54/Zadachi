// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include  <stdio.h>
#include <math.h>

int _tmain(int argc, _TCHAR* argv[])
{ 
  float F,C;
  int n;
  do
  {
   printf ("Vybrat regime 1)C->F, 2)F->C\n");
   scanf_s ("%d",&n);
    if (n==1)
	 {
	printf ("Vvesti chislo\n"); 
     scanf_s ("%f",&C);
	 F=(9*C+160)/5;
	 printf ("%f\n", F);
	}
	if (n==2)
   {
	printf ("Vvesti chislo1\n"); 
    scanf_s ("%f",&F);
	C=(F-32)*5/9;
	printf ("%f\n", C);
	}
  } while (n == 1 || n == 2); 
	return 0;
}
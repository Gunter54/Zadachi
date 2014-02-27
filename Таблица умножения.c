// float.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	 int i, j, n; 
     printf ("Vvedite n: ");
     scanf_s ("%d", &n);  
     for(i = 1; i <= n ; i++) 
	 { 
		for(j = 1; j <= n ; j++) 
		{
              printf ("%5d", i * j);
         }
         printf ("\n");
     }
     return 0;
	 }

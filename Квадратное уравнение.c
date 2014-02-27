// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include  <stdio.h>
#include <math.h>

int _tmain(int argc, _TCHAR* argv[])
{ 
  float a,b,c,d,x,x1,x2; 
   printf ("Vvesti 3 cifri\n"); 
   scanf_s ("%f %f %f",&a,&b,&c); 
   if (a==0) 
   { 
    if (b==0) printf ("Yravnenie ne imeet reheniy\n"); 
    else printf ("Yravnenie ne cvadratnoe %f\n",x=-c/b); 
   } 
   else 
   { 
    d=b*b-(4*a*c);
    if (d<0) printf ("D<0 reheniy net\n");  
    else if (d==0) printf ("D=0 Odno rehenie x=%f\n",x=-b/(2*a)); 
      else 
      { 
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
       printf ("Dva reheniya:\n"); 
       printf ("X1=%f\nX2=%f\n",x1,x2); 
      } 
   } 
	return 0;
}


// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>

int _tmain(int argc, _TCHAR* argv[])
{
	int a,b,c,d,e,f,num;
	num = 0;
		for (a=0;a<10;a++)
			for (b=0;b<10;b++)
				 for (c=0;c<10;c++)
					 for (d=0;d<10;d++)
						 for (e=0;e<10;e++)
							 for (f=0;f<10;f++)
						 if (a+b+c==d+e+f)
							 {
								 num=num + 1;
						 }
   printf ("Kolichestvo schastlivyh biletov = %d\n",num); 
    return num;
}

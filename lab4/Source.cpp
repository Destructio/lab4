#include "Header.h"
#include <cmath>
#include <iostream>

double z(double a, double b, double h1, double c, double d, double h2, ListBox^ Lb, double& o)
{
	double sum,x,y,z;

	int n = floor((b - a) / h1) + 1;
	int n1 = floor((d - c) / h2) + 1;

	x = a;
	y = c;
	
	for (int i = 1; i <= n; i++) 
	{
		for (int j = 1; j <= n1; j++) {
			
			z = f(x, y);
			Lb->Items->Add(String::Format("{0}			{1}		{2}", x, y, z));
			if (z < 1.5) { 
				o++; 
				sum+=z;
			}
			y += h2;
		}
		y = c;
		x += h1;
	}

	return sum;
}

double f(double x, double y) 
{
	return(sin(4*x+y)-2);
}
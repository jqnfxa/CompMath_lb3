#include <math.h>

#include "functions.h"


extern double a;


double function(double x)
{
	return tanh(a * x) - x;
}


double function_prime(double x)
{
	return a / pow(cosh(a * x), 2) - 1.0;
}

/*
double function(double x)
{
	return pow(x, 5) + x + a;
}


double function_prime(double x)
{
	return 5 * pow(x, 4) + 1;
}
*/

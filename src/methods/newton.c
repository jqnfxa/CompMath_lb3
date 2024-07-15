#include <math.h>
#include <stdio.h>

#include "newton.h"
#include "definitions.h"
#include "../util/functions.h"


double find_root_newton(double x0, double epsilon)
{
	double x = x0;
	double x_prev = INFINITY;

#ifdef DEBUG
	int iteration = 0;
	printf("newton iteration: %d | x: %.16le\n", iteration, x);
#endif
	double tmp;
	// a, b — (i - 1)-й и i-й члены
	while(isgreaterequal(fabs(x - x_prev), epsilon) && iteration < ITERATIONS_LIMIT)
	{
		tmp = x - function(x) / function_prime(x);
		x_prev = x;
		x = tmp;
#ifdef DEBUG
		printf("newton iteration: %d | x: %.16le | y: %.16le\n", ++iteration, x, function(x));
#endif
	}

	return x;
}

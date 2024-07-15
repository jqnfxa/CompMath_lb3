#include <math.h>
#include <stdio.h>

#include "secant.h"
#include "definitions.h"
#include "../util/functions.h"


double find_root_secant(double a, double b, double epsilon)
{
#ifdef DEBUG
	int iteration = 0;
	printf("secant iteration: %d | x: %.16le\n", iteration, a);
	printf("secant iteration: %d | x: %.16le\n", ++iteration, b);
#endif
	double tmp;
	// a, b — (i - 1)-й и i-й члены
	while(isgreaterequal(fabs(b - a), epsilon) && iteration < ITERATIONS_LIMIT)
	{
		// tmp = a - function(a) * (b - a) / (function(b) - function(a))
		tmp = fma(-function(a), (b - a) / (function(b) - function(a)), a);
		a = b;
		b = tmp;
#ifdef DEBUG
		printf("secant iteration: %d | x: %.16le | y: %.16le\n", ++iteration, b, function(b));
#endif
	}

	return b;
}

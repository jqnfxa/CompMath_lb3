#include <math.h>
#include <stdio.h>

#include "bisection.h"
#include "definitions.h"
#include "../util/functions.h"


double find_root_bisection(double a, double b, double epsilon)
{
#ifdef DEBUG
	int iteration = 0;
	printf("bisection iteration: %d, left: %.16le, right: %.16le\n", iteration, a, b);
#endif

	double middle;
	do
	{
		middle = (a + b) / 2.0;

		if (signbit(function(a)) == signbit(function(middle)))
		{
			a = middle;
		}
		else
		{
			b = middle;
		}

#ifdef DEBUG
		printf("bisection iteration: %d, left: %.16le, right: %.16le\n", ++iteration, a, b);
#endif
	} while (isgreaterequal(fabs(b - a), epsilon) && iteration < ITERATIONS_LIMIT);

	return middle;
}

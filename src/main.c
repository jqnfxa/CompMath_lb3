#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "methods/newton.h"
#include "methods/bisection.h"
#include "methods/secant.h"


double a;

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		fprintf(stderr, "usage: %s <a> <epsilon>\n", argv[0]);
		return 1;
	}

	a = atof(argv[1]);
	const double epsilon = atof(argv[2]);


	double bisection_root = find_root_bisection(1e-13, 1, epsilon);
	double secant_root = find_root_secant(0.5, 1, epsilon);
	double newton_root = find_root_newton(0.5, epsilon);


	printf("bisection: %.16le\n", bisection_root);
	printf("secant:    %.16le\n", secant_root);
	printf("newton:    %.16le\n", newton_root);

	// bring root
	/*double guess = (pow(-1, a > 0 ? 1 : 0)) * pow(fabs(a), 0.2);
	double left_bound = guess < 0 ? guess : 0;
	double right_bound = guess < 0 ? 0 : guess;

	double bisection_root = find_root_bisection(left_bound, right_bound, epsilon);
	double newton_root = find_root_newton(guess, epsilon);
	double secant_root = find_root_secant(left_bound, right_bound, epsilon);


	printf("bisection: %.16le\n", bisection_root);
	printf("secant: %.16le\n", secant_root);
	printf("newton: %.16le\n", newton_root);
	*/

	return 0;
}

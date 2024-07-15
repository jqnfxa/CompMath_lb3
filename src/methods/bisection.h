#ifndef BISECTION_H
#define BISECTION_H


/**
 * @brief find x in range [a b], such that `f(x) = 0` with error <= epsilon
 * @param a - left bound of range for x
 * @param b - right bound of range for x
 * @param epsilon - absolute error bound
 * @return x such that `f(x) = 0`
 */
double find_root_bisection(double a, double b, double epsilon);

#endif // BISECTION_H

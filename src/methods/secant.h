#ifndef SECANT_H
#define SECANT_H


/**
 * @brief find x in range [a b], such that `f(x) = 0` with error <= epsilon
 * @param a - left bound of range for x
 * @param b - right bound of range for x
 * @param epsilon - absolute error bound
 * @return x such that `f(x) = 0`
 */
double find_root_secant(double a, double b, double epsilon);

#endif // SECANT_H

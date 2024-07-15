#ifndef NEWTON_H
#define NEWTON_H


/**
 * @brief find x by given guess x0, such that `f(x) = 0` with error <= epsilon
 * @param x0 - initial guess
 * @param epsilon - absolute error bound
 * @return x such that `f(x) = 0`
 */
double find_root_newton(double x0, double epsilon);

#endif // NEWTON_H

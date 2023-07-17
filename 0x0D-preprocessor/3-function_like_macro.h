#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

/**
 * ABS - Computes the absolute value of a number x.
 * @x: The number to compute the absolute value of.
 *
 * Description: This macro takes a number x as input and returns its absolute value.
 * If x is positive or zero, it returns x. If x is negative, it returns -x.
 *
 * Return: The absolute value of x.
 */
#define ABS(x) ((x < 0) ? -(x) : (x))

#endif /* FUNCTION_LIKE_MACRO_H */


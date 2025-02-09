#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <iostream>

/**
 * @file example.h
 * @brief This file contains the declaration of the Calculator class.
 */

/**
 * @class Calculator
 * @brief A simple calculator class for basic arithmetic operations.
 */
class Calculator {
public:
    /**
     * @brief Adds two integers.
     * @param a First integer.
     * @param b Second integer.
     * @return Sum of a and b.
     */
    int add(int a, int b);

    /**
     * @brief Subtracts two integers.
     * @param a First integer.
     * @param b Second integer.
     * @return Difference between a and b.
     */
    int subtract(int a, int b);

    /**
     * @brief Multiplies two integers.
     * @param a First integer.
     * @param b Second integer.
     * @return Product of a and b.
     */
    int multiply(int a, int b);

    /**
     * @brief Divides two integers.
     * @param a Dividend.
     * @param b Divisor.
     * @return Quotient of a divided by b.
     * @note If b is zero, an error message is printed.
     */
    double divide(int a, int b);
};

#endif // EXAMPLE_H

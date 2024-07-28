// main.cpp

#include <iostream>
#include "math_operations.h"  // Include the header file where MathFunctions are declared

int main() {
    // Usage of functions from MathFunctions namespace
    int result_add = MathFunctions::add(5, 3);
    int result_subtract = MathFunctions::subtract(10, 4);

    std::cout << "Result of addition: " << result_add << std::endl;
    std::cout << "Result of subtraction: " << result_subtract << std::endl;

    return 0;
}

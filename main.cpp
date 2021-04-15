#include "src/calc.hpp"

#include <iostream>
#include <string>

/**
 * Main function
 *
 * @return int
 */
int main() {
    std::string expression;

    std::getline(std::cin, expression);

    int result = calc::calculateFromExpression(expression);

    std::cout << std::endl << "Result: " << result << std::endl;

    return EXIT_SUCCESS;
}

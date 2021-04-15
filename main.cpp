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

    std::cout << "C++ Calculator" << std::endl << "Type \"exit\" to quit" << std::endl << std::endl;

    while (true) {
        std::getline(std::cin, expression);

        std::size_t exit = expression.find("exit");

        if (exit != std::string::npos) {
            return EXIT_SUCCESS;
        }

        int result = calc::calculateFromExpression(expression);

        std::cout << result << std::endl;
    }
}

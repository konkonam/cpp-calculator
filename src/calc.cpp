#include "calc.hpp"

#include <string>

/**
 * Mathematical operator used for addition
 */
const char calc::OPERATOR_ADD = '+';

/**
 * Mathematical operator used for subtraction
 */
const char calc::OPERATOR_SUBTRACT = '-';

/**
 * Mathematical operator used for multiplication
 */
const char calc::OPERATOR_MULTIPLY = '*';

/**
 * Mathematical operator used for division
 */
const char calc::OPERATOR_DIVIDE = '/';

/**
 * Collection of mathematical operators
 */
const char calc::OPERATORS[4] = {
    OPERATOR_ADD,
    OPERATOR_SUBTRACT,
    OPERATOR_MULTIPLY,
    OPERATOR_DIVIDE
};

/**
 * Calculates a mathematical expression from a string
 *
 * @param expression The given expression to calculate
 *
 * @return the calculated result
 */
float calc::calculateFromExpression(const std::string& expression) {
    char mathOperator = findOperator(expression);

    int* numbers = numbersFromString(expression);

    auto a = (float) numbers[0];
    auto b = (float) numbers[1];

    std::free(numbers);

    switch (mathOperator) {
        case OPERATOR_ADD:
            return add(a, b);
        case OPERATOR_SUBTRACT:
            return subtract(a, b);
        case OPERATOR_MULTIPLY:
            return multiply(a, b);
        case OPERATOR_DIVIDE:
            return divide(a, b);
        default:
            break;
    }

    return 0;
}

/**
 * Finds a mathematical operator from a string
 *
 * @param string The given string
 *
 * @return the operator character
 */
char calc::findOperator(const std::string& string) {
    for (char i : OPERATORS) {
        std::size_t found = string.find(i);

        if (found != std::string::npos) {
            return i;
        }
    }

    return ' ';
}

/**
 * Finds all integers in a string
 *
 * @param string The given string
 *
 * @return the array of numbers
 */
int* calc::numbersFromString(const std::string& string) {
    unsigned int numbersLength = 0;
    int* numbers = (int*) std::malloc(2 * sizeof(int));

    std::string number;

    for (char i : string) {
        if (std::isdigit(i)) {
            number += i;
        }
        else if (!number.empty()) {
            numbers[numbersLength++] = std::stoi(number);
            number = "";
        }
    }

    if (!number.empty()) {
        numbers[numbersLength] = std::stoi(number);
    }

    return numbers;
}

/**
 * Math add function
 *
 * @param a first input number
 * @param b second input number
 *
 * @return calculated result
 */
float calc::add(float a, float b) {
    return a + b;
}

/**
 * Math subtract function
 *
 * @param a first input number
 * @param b second input number
 *
 * @return calculated result
 */
float calc::subtract(float a, float b) {
    return a - b;
}

/**
 * Math multiply function
 *
 * @param a first input number
 * @param b second input number
 *
 * @return calculated result
 */
float calc::multiply(float a, float b) {
    return a * b;
}

/**
 * Math divide function
 *
 * @param a first input number
 * @param b second input number
 *
 * @return calculated result
 */
float calc::divide(float a, float b) {
    return a / b;
}
#ifndef CPP_CALCULATOR_CALC_HPP
#define CPP_CALCULATOR_CALC_HPP

#include <string>

class calc {
    public:
        static int calculateFromExpression(const std::string& expression);

    private:
        static char findOperator(const std::string &expression);
        static int* numbersFromString(const std::string& expression);

        static int add(int a, int b);
        static int subtract(int a, int b);
        static int multiply(int a, int b);
        static int divide(int a, int b);

        static const char OPERATOR_DIVIDE;
        static const char OPERATOR_MULTIPLY;
        static const char OPERATOR_SUBTRACT;
        static const char OPERATOR_ADD;

        static const char OPERATORS[4];
};

#endif //CPP_CALCULATOR_CALC_HPP
